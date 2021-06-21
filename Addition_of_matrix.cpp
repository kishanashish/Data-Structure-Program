#include<iostream>
using namespace std;
int main()
{
	int i,j, n1[2][2],n2[2][2],add[2][2];
	cout<<"Enter Element for 1st 2-dimensional Array"<<endl;
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			cin>>n1[i][j];
		}
	}
	cout<<"Enter Element for 2st 2-dimensional Array"<<endl;
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			cin>>n2[i][j];
		}
	}
	
	cout<<"\n 1st Matrices"<<endl;
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			cout<<n1[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"\n 2nd Matrices"<<endl;
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			cout<<n2[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<"\n Addition of two Matrices"<<endl;
 	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			cout<<n1[i][j]+n2[i][j]<<"\t";
		}
		cout<<endl;
	}
}
