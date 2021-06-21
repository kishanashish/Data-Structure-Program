#include<iostream>
using namespace std;
int main()
{
	int i,j,n[5],s=0,f=0;
	cout<<"Enter 5 number:"<<endl;
	for(i=0;i<5;i++)
	cin>>n[i];
	
	cout<<"Enter Search: ";
	cin>>s;
	
	for(i=0; i<5; i++)
	{
		if(n[i]==s)
		f=1;
	}
	if(f==1)
		cout<<"Search element is found "<<endl;
	else
		cout<<"Search element is not found "<<endl;
	
	return 0;
	
}
