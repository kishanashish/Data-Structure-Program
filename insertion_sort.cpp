#include<iostream>
using namespace std;
int main()
{
	int i,j,key,n[5];
	cout<<"Enter 5 number"<<endl;
	for(i=0; i<5; i++)
	{
		cin>>n[i];
	}
	for(i=1; i<5; i++)
	{
		key=n[i];
		j=i-1;
		while (j>=0 && n[j]>key)
		{
			n[j+1]=n[j];
			j=j-1;
		}
		n[j+1]=key;
	}
	cout<<"After insertion sort"<<endl;
	
	for(i=0; i<5; i++)
	{
		cout<<n[i]<<endl;
	}
}
