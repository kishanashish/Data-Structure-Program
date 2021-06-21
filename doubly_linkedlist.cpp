#include<iostream>
using namespace std;
struct node
{
	int data;
	node *pre;
	node *next;
}*head;

int addend(int value)
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
		cout<<"else"<<endl;
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

int addbeg(int value)
{
	node *temp=new node;
	
	if(head==NULL)
	{
		temp->data=value;
		temp->pre=NULL;
		temp->next=NULL;
		head=temp;
	}
	else
	{
		temp->data=value;
		temp->pre=NULL;
		temp->next=head;
		head->pre=temp;
		head=temp;
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
	head=head->next;
	return temp->data;
}


int display()
{
	node *temp=new node;
	temp=head;
	if(head==NULL)
		cout<<"Queue is Empty!!"<<endl;
	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->next;
	}
	return 0;
	
}

int main()
{
 		cout<<"-----Operation on Doubly Linked lists-----"<<endl;
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
			default: cout<<"wrong choice !!!!";
					
		}
	}while(1);
	

	return 0;
}

