#include<iostream>
using namespace std;
int main()
{
	int i;
	char n1[6],n2[6];
	cout<<"Array 1: Enter 6 character:"<<endl;
	for(i=0; i<6; i++)
		cin>>n1[i];
	cout<<"Array 2: Enter 6 character:"<<endl;
	for(i=0; i<6; i++)
		cin>>n2[i];
	cout<<"Entered All characters are:"<<endl;
	for(i=0; i<6; i++)
		cout<<n1[i];
		cout<<"\t";
	for(i=0; i<6; i++)
		cout<<n2[i];
	return 0;
}
