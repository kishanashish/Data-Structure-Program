#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string infix;
	int i;	
	cout<<"Enter Infix Expression"<<endl;
	cin>>infix;
	char stack[20];
	char Exp[20];
	int top=-1;
	int var=-1,l;
	int m=infix.length()-1;
	//m=m-1;
	for( i=m;i>=0;i--)
	{
	
		int c=infix[i];
		if(c>=97 && c<=122 || c>=65 && c<=90)
		{
			var=var+1;
			Exp[var]=infix[i];	
		}
		if(infix[i]==')')
		{
			top=top+1;
			stack[top]=infix[i];
			
		}
		else if(infix[i]=='(')
		{
			while(stack[top]!=')')
			{
				var=var+1;
				Exp[var]=stack[top];
				top=top-1;
			}
			top=top-1;
		}
		else if(infix[i]=='+'||infix[i]=='-')
		{
			for(l=top; stack[l]!='('||top!=-1; l--)
			{
				if(stack[l]=='^'||stack[l]=='*'||stack[l]=='/'||stack[l]=='-'||stack[l]=='+')
				{
					var=var+1;
					Exp[var]=stack[top];
					
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
		else if(infix[i]=='*'||infix[i]=='/')
		{
			for(l=top; stack[l]!='('||top!=-1; l--)
			{
				if(stack[l]=='^'||stack[l]=='*'||stack[l]=='/')
				{
					var=var+1;
					Exp[var]=stack[top];
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
			for(l=top; stack[l]!='('||top!=-1; l--)
			{
				if(stack[l]=='^')
				{
					var=var+1;
					Exp[var]=stack[top];
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
		
}
		if(infix[i]=='\0')
		{
			while(top!=-1)
			{
				var=var+1;
				Exp[var]=stack[top];
				
				top=top-1;
			}
		}

	cout<<"\n Postfix Expression"<<endl;
	int j;
	for(j=var;j>=0;j--)
	{
		cout<<Exp[j];
	}
	return 0;
}
