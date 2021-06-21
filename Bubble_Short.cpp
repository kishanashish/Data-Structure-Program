#include<iostream>
using namespace std;
int main()
{
	int i,j,n[5],temp;
	
	cout<<"Entere 5 Number:"<<endl;
	for(i=0; i<5; i++)
	{
		cin>>n[i];
	}
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			if(n[j]>n[j+1])
			{
				temp=n[j];
				n[j]=n[j+1];
				n[j+1]=temp;
			}		}
	}
	
	cout<<"After bubble sort:"<<endl;
	for(i=0; i<5; i++)
	{
		cout<<n[i]<<endl;
	}
}
