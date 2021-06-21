#include<iostream>
using namespace std;
int main()
{
	string infix;
	cout<<"Enter Expression :"<<endl;
	cin>>infix;
	cout<<"Expression : "<<infix<<endl;
	int i,j,top=-1,a=0;
	int s=infix.length();
	char stack[s];
	char Exp[s];
	
	for(i=0; i<s; i++)
	{
		int c=infix[i];
		if(c>=97 && c<=122 || c>=65 && c<=90)
		{
			Exp[a]=infix[i];
			a++;
		}
		//else if
	}
	
	
	
	
	cout<<"Expression"<<endl;
	for(j=0; j<s; j++)
	{
		cout<<Exp[j];
	}
}
