#include<iostream>
using namespace std;
struct node
{
	int data;
	node *link;
}*head;

int enqueue(int value)
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

int dequeue()
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
	cout<<"-----Queue using Singli Linked lists-----"<<endl;
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
				enqueue(value);
				break;
			case 2: 
				cout<<"Pop value :"<<dequeue()<<endl;
				break;
			case 3:
				display();break;
			case 4:exit(0);
			default: cout<<"wrong choice !!!!"<<endl;
					
		}
	}while(1);
	
	return 0;
}
