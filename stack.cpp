#include<iostream>
using namespace std;
 int maxm,top=-1,i,s=0;
 int  n[20],c;
void push()
{
	cout<<"-----Push operation-----"<<endl;
	if(top==maxm-1)
		cout<<"Stack is overflow!!"<<endl;
	else
	{
		cout<<"Enter your Value"<<endl;
			top=top+1;
			cin>>n[top];
	}
}

void pop()
{
	cout<<"-----Pop operation-----"<<endl;
	if(top==-1)
		cout<<"Stack is undetflow!!"<<endl;
	else
	{
		
		cout<<"Pop value is "<<n[top]<<endl;
		top=top-1;
	}

	
}

void display()
{
	if(top==-1)
	{
		cout<<"Stack is underflow !!"<<endl;
		cout<<"Can't display any value"<<endl;
	}
	else
	{
		cout<<"-----All Element are-----"<<endl;
		for(i=0;i<=top; i++)
		cout<<n[i]<<endl;
	}
	
}

void search()
{	
	if(top==-1)
	{
		cout<<"Stack is underflow !!"<<endl;
		cout<<"Can't Search any value"<<endl;
	}
	else
	{
		cout<<"Enter search vlaue :"<<endl;
		cin>>s;
		int f=0;
		for(i=0;i<=top; i++)
		{
			if(n[i]==s)
			{
					f=1;
			}
		}
		
		if(f==1)
			cout<<"Search value is find "<<endl;
		else
			cout<<"Search value is not find "<<endl;
	}
}

int main()
{
	int c;
	cout<<"Enter size of Stack : ";
	cin>>maxm;
	cout<<"\n Press 1. for PUSH:"<<endl;
	cout<<" Press 2. for POP:"<<endl;
	cout<<" Press 3. for Display:"<<endl;
	cout<<" Press 4. for Search:"<<endl;
	cout<<" Press 5. for Exit:"<<endl;
	do{
		cout<<"Enter your choice :";
		cin>>c;
		
		switch(c)
		{
			case 1: push();break;
			case 2: pop();break;
			case 3: display();break;
			case 4: search();break;
			case 5: exit(0);
			default: cout<<"You entered wrong choice!!"<<endl;
		}
		
	}while(1);
	return 0;
}
