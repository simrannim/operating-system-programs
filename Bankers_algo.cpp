#include<bits/stdc++.h>
using namespace std;
main()
{
	int p,r,count=0;
	cout<<"Enter no. of processes\n"; cin>>p;
	cout<<"Enter no. of resourcess\n"; cin>>r;
	
	int ca[p][r],ma[p][r],av[r],ne[p][r],flag1[p],ans=0;
	count=p;
	cout<<"\nEnter current allocation\n";
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<r;j++)
		{
			cin>>ca[i][j];
		}
	}
	
	cout<<"\nEnter max allocation\n";
	for(int i=0;i<p;i++)
	{   flag1[i]=0;
		for(int j=0;j<r;j++)
		{
			cin>>ma[i][j];
		}
	}
	
	cout<<"\nEnter available\n";
		for(int j=0;j<r;j++)
		{
			cin>>av[j];
		}
		
		
	    cout<<"\nNeed resources are\n";
		for(int i=0;i<p;i++)
	{
		for(int j=0;j<r;j++)
		{
			ne[i][j]=ma[i][j]-ca[i][j];
			cout<<ne[i][j]<<"  ";
		}
		cout<<endl;
	}
	
	
		while(count!=0)
		{
			for(int i=0;i<p;i++)
			{   int flag=0;
				for(int j=0;j<r;j++)
				{
					if(av[j]>=ne[i][j]&&flag1[i]!=1)
					{
						flag++;
					}
				}
				if(flag==r)
				{
					for(int j=0;j<r;j++)
					av[j]+=ma[i][j];		
					flag1[i]=1;
					ans++;
					
				} if(flag==r) break;
			}count--;
		}
		
		if(ans==p) cout<<"\nsafe\n";
		
		cout<<"Available resources at last\n";
		for(int i=0;i<r;i++) cout<<av[i]<<" ";
		cout<<endl;
}
//test inputs
/*
5
3
0 1 0
2 0 0
3 0 2
2 0 0
0 0 2

7 5 3
3 2 2
9 0 2
2 2 2
4 3 3

3 3 2
*/

