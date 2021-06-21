#include<iostream>
#include<malloc.h>
using namespace std;
int main()
{	
	int i,j,n,l,m,size;
	cout<<"\n Enter Size of coefficient"<<endl;
	cin>>n;
	int c1[n];
	cout<<"\n Enter first value of coefficient"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>c1[i];
	}
	cout<<"\n First expression"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<c1[i];
		if(i!=0)
			cout<<"x^"<<i;
		if(i!=n-1)	
			cout<<"+";
	}
	cout<<"\n Enter Size of second coefficient"<<endl;
	cin>>n; 
	int c2[n];
	cout<<"\n Enter value of  second coefficient"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>c2[i];
	}
	cout<<"\n Second expression"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<c2[i];
		if(i!=0)
			cout<<"x^"<<i;
		if(i!=n-1)	
			cout<<"+";
	}
	cout<<endl;
	l=sizeof(c1)/sizeof(c1[0]);
	m=sizeof(c2)/sizeof(c2[0]);
	if(l>m)
		size=l;
	else
		size=m;
	int *sum=new int[size];
	for(i=0;i<l;i++)
		sum[i]=c1[i];	
	for(i=0;i<m;i++)
		sum[i]+=c2[i];
	cout<<"\n Sum of Polynomial"<<endl;
	for(i=0;i<size;i++)
	{
		cout<<sum[i];
		if(i!=0)
			cout<<"x^"<<i;
		if(i!=size-1)
			cout<<"+";
	}
	return 0;
}

