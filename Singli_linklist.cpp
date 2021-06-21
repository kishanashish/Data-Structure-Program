#include<iostream>
using namespace std;
struct node
{
	int data;
	node *link;
}*head;

int addend(int value)
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


int addbeg(int value)
{
	node *temp=new node;
	
		temp->data=value;
		temp->link=head;
		
	head=temp;
	 
}


int  display()
{
	node *temp=new node;
	temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->link;
	}
	return 0;
}

int delbeg()
{
	if(head==NULL)
	{
		cout<<"Queue is empty"<<endl;
		return 0;
	}
	node *temp=new node;
	temp=head;
	head=head->link;
	return temp->data;
}


 int main()
{
	cout<<"-----Operation on Singli Linked lists-----"<<endl;
	cout<<"Press 1. for Add node at begain:"<<endl;
	cout<<"Press 2. for Add node at end:"<<endl;
	cout<<"Press 3. for Delete node at begain:"<<endl;
	cout<<"Press 4. for Display:"<<endl;
	cout<<"Press 5. for Exit:"<<endl;
	int choice,value;
	do
	{
		cout<<"Enter your choice: ";
		cin>>choice;
		
		switch(choice)
		{
			case 1: 
				cout<<"\n Enter the value:";
				cin>>value;
				addbeg(value);
				break;
			case 2: 
				cout<<"\n Enter the value:";
				cin>>value;
				addend(value);
				break;
			case 3:
				cout<<"Deleted value is: "<<delbeg()<<endl;
				break;
			case 4:
				display();break;
			case 5:exit(0);
			default: cout<<"wrong choice !!!!"<<endl;
					
		}
	}while(1);
	
	return 0;
}
