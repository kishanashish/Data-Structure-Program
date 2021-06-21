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
	char Exp[20];
	int top=-1;
	int var=0,l;
	for( i=0;i<infix.length();i++)
	{
	
		int c=infix[i];
		if(c>=97 && c<=122 || c>=65 && c<=90)
		{
			
			Exp[var]=infix[i];
			cout<<Exp[var];
			var=var+1;
			
		}
		if(infix[i]=='+')
		{
			for(l=top; stack[l]!='('; l--)
			{
				if(stack[l]=='^'||stack[l]=='*'||stack[l]=='/'||stack[l]=='-'||stack[l]=='+')
				{
					Exp[var]=stack[top];
					var=var+1;
					top=top-1;
				}
				else
				{
					top=top+1;
					stack[top]=infix[i];
					break;
				}
			}
		
		}
		else if(  infix[i]=='-')
		{
			for(l=top; stack[l]!='('; l--)
			{
				if(stack[l]=='^'||stack[l]=='*'||stack[l]=='/'||stack[l]=='+'||stack[l]=='-')
				{
					Exp[var]=stack[top];
					var=var+1;
					top=top-1;
				}
				else
				{
					top=top+1;
					stack[top]=infix[i];
					break;
				}
			}
		}
		else if(infix[i]=='*')
		{
			for(l=top; stack[l]!='('; l--)
			{
				if(stack[l]=='^'||stack[l]=='/'||stack[l]=='*')
				{
					Exp[var]=stack[top];
					var=var+1;
					top=top-1;
				}
				else
				{
					top=top+1;
					stack[top]=infix[i];
					break;
				}
			}
		}
		else if(infix[i]=='/')
		{
			
			for(l=top; stack[l]!='('; l--)
			{
				if(stack[l]=='^'||stack[l]=='*'||stack[l]=='/')
				{
					Exp[var]=stack[top];
					var=var+1;
					top=top-1;
				}
				else
				{
					top=top+1;
					stack[top]=infix[i];
					break;
				}
			}
		}
		else if(infix[i]=='^')
		{
			
			for(l=top; stack[l]!='('; l--)
			{
				if(stack[l]=='^' )
				{
					Exp[var]=stack[top];
					var=var+1;
					top=top-1;
				}
				else
				{
					top=top+1;
					stack[top]=infix[i];
					break;
				}
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
	
		
	}
		if(infix[i]=='\0')
		{
			while(top!=-1)
			{
				Exp[var ]=stack[top];
				var=var+1;
				top=top-1;
			}
		}
	

	
	cout<<"\nExpression"<<endl;
	int j;
	for(j=0;j<i;j++)
	{
		cout<<Exp[j];
	}
	
	cout<<"\n stack"<<endl;
	for( i=0;i<=top; i++)
	{
		cout<<stack[i]<<" ";
	}
}
