#include<bits/stdc++.h>
#define max 5
using namespace std;

int s=1,e=5,f=0,a[max];
int wait(int s)
{   int c=s;
	return(--c);
}
int signal(int s)
{   int v=s;
	return(++v);
}

void produce()
{
	cout<<"f is "<<f<<"\n"<<"E is "<<e<<"\n";
	cout<<"\nEnter an element\n";
	cin>>a[f];
	cout<<"Elements present are  ";
	for(int i=0;i<=f;i++) cout<<a[i]<<"  ";
	cout<<endl;
}

void consume()
{   a[f]=0;
	cout<<"\nConsuming an item  "<<endl;
		cout<<"f is "<<f<<"\n"<<"E is "<<e<<"\n";
	cout<<"Remaining elements are\n";
	for(int i=0;i<f;i++) cout<<a[i]<<"  ";
	cout<<endl;
}

void producer()
{
	


	cout<<"\nIn producer code\n";
    e=	wait(e);
	s=wait(s);
	produce();
	s=signal(s);
    f=signal(f);

}


void consumer()
{
	
	  cout<<"\nIn consumer code\n";
		f=wait(f);
		s=wait(s);
		consume();
		s=signal(s);
		e=signal(e);
		
	
}

main()
{   int cho;
	while(1)
	{cout<<"\n1.Producer\n2.Consumer\n3.Exit\n"<<"choice"<<" = ";
	cin>>cho;
	cout<<endl;
	switch(cho)
	{
		case 1: if(s==1 && e!=0)
		producer();
		else cout<<"\nBuffer is full\n";
		break;
		
		case 2: if(s==1&& f!=0)
		consumer();
		else cout<<"\nBuffer empty\n";
		break;
		
		case 3: exit(0);
		break;
	}
		
		}	

}
