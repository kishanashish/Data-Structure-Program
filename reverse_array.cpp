
//reverse the array

#include<iostream>
using namespace std;
int main()
{
	int i=0,j=0, n[5];
	cout<<"Enter 5 number"<<endl;
	for(i=0; i<5; i++)
	{
		cin>>n[i];
	}
	int temp=0;
 
	for(i=0,j=4; i<=4 && i !=j && j>=0 ;j--, i++)
	{
		temp=n[i];
		n[i]=n[j];
		n[j]=temp;
	}
	
	
	cout<<"value are 2"<<endl;
	for(i=0; i<5; i++)
	{
		cout<<n[i]<<endl;
	}
	return 0;
}
