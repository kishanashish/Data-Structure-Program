#include<iostream>
using namespace std;
struct node
{
	int data;
	node *link;
}*head;

int push(int value)
{
	node *temp=new node;
	node *n=new node;
	if (head==NULL)
	{
		temp->data=value;
		temp->link=NULL;
		head=temp;
	}
	else
	{
		temp=head;
		while(temp->link!=NULL)
		temp=temp->link;
		n->data=value;
		n->link=NULL;
		temp->link=n;	
			
	}
	return 0;
}

int pop()
{
	node *temp=new node;
	node *ptr=new node;
	temp=head;
	int data;
	
	if(head==NULL)
		cout<<"Stacl is Empty!!"<<endl;
	else if(head->link==NULL)
	{
		
		head=NULL;
		return head->data;
	
	}
	else
	{
		while(temp->link!=NULL)
		{
			ptr=temp;
			temp=temp->link;
		}
		data=ptr->link->data;
		ptr->link=NULL;
		return data;
	}
	return 0;
}



int  display()
{	
	cout<<"All values are:"<<endl;
	node *temp=new node;
	temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->link;
	}
	return 0;
}




 int main()
{
	cout<<"-----Stack using Singli Linked lists-----"<<endl;
	cout<<"Press 1. for Push:"<<endl;
	cout<<"Press 2. for Pop:"<<endl;
	cout<<"Press 3. for Display:"<<endl;
	cout<<"Press 4. for Exit:"<<endl;
	int choice,value;
	do
	{
		cout<<"Enter your choice: ";
		cin>>choice;
		
		switch(choice)
		{
			case 1: 
				cout<<"Enter the value:";
				cin>>value;
				push(value);
				break;
			case 2: 
				cout<<"Pop value :"<<pop()<<endl;
				break;
			case 3:
				display();break;
			case 4:exit(0);
			default: cout<<"wrong choice !!!!"<<endl;
					
		}
	}while(1);
	
	
	return 0;
}
