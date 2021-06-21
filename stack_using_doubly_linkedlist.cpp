#include<iostream>
using namespace std;
struct node
{
	int data;
	node *pre;
	node *next;
}*head;

int push(int value)
{
	node *temp=new node;
	node *ptr=new node;
	
	if(head==NULL)
	{
		temp->data=value;
		temp->pre=NULL;
		temp->next=NULL;
		head=temp;
		
	}
	else
	{
		
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		ptr->data=value;
		ptr->pre=temp;
		ptr->next=NULL;
		temp->next=ptr;
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
		cout<<"Stack is Empty!!"<<endl;
	else if(head->next==NULL)
	{
		data=head->data;
		cout<<"Pop Value="<<head->data;
		head=NULL;
		return data;	
	}
	else
	{
		while(temp->next!=NULL)
		{
			ptr=temp;
			temp=temp->next;
		}
		data=ptr->next->data;
		ptr->next=NULL;
		return data;
		
	}
	return 0;
}

int display()
{
	cout<<"All Values are:"<<endl;
	node *temp=new node;
	temp=head;
	
	if(head==NULL)
		cout<<"Stack is Empty!!"<<endl;
	
	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->next;
	}
	return 0;
	
}

int main()
{
 	cout<<"-----Stack using Doubly Linked lists-----"<<endl;
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

