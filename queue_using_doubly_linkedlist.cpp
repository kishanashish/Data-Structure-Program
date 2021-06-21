#include<iostream>
using namespace std;
struct node
{
	int data;
	node *pre;
	node *next;
}*head;

int dqueue(int value)
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

 
int enqueue()
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
	cout<<"All values are:"<<endl;
	node *temp=new node;
	temp=head;
	
	if(head==NULL)
		cout<<"Queue is empty!!!"<<endl;
	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->next;
	}
	return 0;
	
}

int main()
{
 	cout<<"-----Queue using Doubly Linked lists-----"<<endl;
	cout<<"Press 1. for enqueue:"<<endl;
	cout<<"Press 2. for dequeue:"<<endl;
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
				dqueue(value);
				break;
			case 2: 
				cout<<"Pop value :"<<enqueue()<<endl;
				break;
			case 3:
				display();break;
			case 4:exit(0);
			default: cout<<"wrong choice !!!!"<<endl;
					
		}
	}while(1);
	
	
	return 0;
}

