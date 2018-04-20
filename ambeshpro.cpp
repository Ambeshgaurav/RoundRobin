#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int a[10],b[10],p[10];
	int i,f,n,m,j;
	int counter=0;
	int time,ptime;
	char pn[10];
	cout<<"Enter  the no of process : ";
	cin>>n;
	cout<<"Enter  the Processess Names only char ";
	for(i=0;i<n;i++)
		cin>>pn[i];
	cout<<"Enter Priyority of processess : ";
	for(i=0;i<n;i++)
		cin>>p[i];
	cout<<"Enter arrival time of processess : ";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"Enter burst time of processess : ";
	for(i=0;i<n;i++)
		cin>>b[i];
	for(time=0;counter!=1;++time)
	{
		m=0;
		for(f=0;f<n;f++)
		{
			if(a[f]<=time && b[f]>0 && p[f]<p[m])
			{
					m=f;
			}
		}
		if(a[m]<=time)
		{
			b[m]--;
			cout<<pn[m]<<time+1;
		}
		if(b[m]==0)
		{
			counter++;
		}
	}
	
		
for(time;counter<n;)
{
	for(j=0;j<n;j++)
	{
		if(a[j]<=time && b[j]>0)
		{
			if(b[j]<=4)
				{
					time=time+b[i];
					b[j]=0;
					counter++;
				}
			else
				{
					time=time+4;
					b[i]=b[i]-4;
				}
			cout<<pn[i]<<time;
		}
		
		
	}
	
}

		
}
