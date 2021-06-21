#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string infix;
	int i,s,e;	
	cout<<"Enter Infix Expression"<<endl;
	cin>>infix;
 
	char stack[10];
	char Exp[10];
	int top=-1;
	int var=0;
	for( i=0;i<infix.length();i++)
	{
		//cout<<infix[i]<<endl;
		int c=infix[i];
		if(c>=97 && c<=122 || c>=65 && c<=90)
		{
			Exp[var]=infix[i];
			var=var+1;
		}
		else if(infix[i]=='(')
		{
			top=top+1;
			stack[top]=infix[i];
		}
		else if(infix[i]=='+'|| infix[i]=='-')
		{
			if(top==-1)
			{
				top=top+1;
				stack[top]=infix[i];
			}
			else if(stack[top]=='^'||stack[top]=='*'||stack[top]=='/')
			{
				Exp[var]=stack[top];
				top=top-1;
				var=var+1;
				stack[top]=infix[i];
			}
			else
			{
				top=top+1;
				stack[top]=infix[i];
				
			}
		}/*
		else if(infix[i]=='*'|| infix[i]=='/')
		{
			if(stack[top]=='^')
			{
				Exp[var]=stack[top];
				var=var+1;
				top=top-1;
				stack[top]=infix[i];
			}
			else
			{
				top=top+1;
				stack[top]=infix[i];
			}
		}
		else if(infix[i]==')')
		{
			while(stack[top]!='(')
			{
				Exp[var]=stack[top];
				var=var+1;
				top=top-1;
			}
		}
		else if(infix[i]!='\0')
		{
			while(top!=-1)
			{
				Exp[var]=stack[top];
				var+1;
				top=top-1;
			}
		}*/
	}
	int j;
	cout<<"\nExpression"<<endl;
	for(j=0;j<i;j++)
	{
		cout<<Exp[j]<<"\t";
	}
	cout<<"\n stack"<<endl;
	for( i=0; i<=top; i++)
	{
		cout<<stack[i]<<"\t";
	}
}
