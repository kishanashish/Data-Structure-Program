#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the size of an array"<<endl;
	cin>>n;
	int a[n],i,j=n;
	cout<<"enter the element of an array"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int m;
	m=n/2;
	cout<<"mid"<<m<<endl;
	for(i=0;i<m;i++)
	{
		j=j-1;
		int temp=0;
		temp=a[j];
		a[j]=a[i];
		a[i]=temp;
	}
	
for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
return 0;
}

