#include<iostream>
using namespace std;
int main()
{
	int i,n[5];
	cout<<"Enter 5 Number:"<<endl;
	for(i=0; i<5; i++)
		cin>>n[i];
	cout<<"All values are:"<<endl;
	for(i=0; i<5; i++)
		cout<<n[i]<<endl;
	return 0;
}
