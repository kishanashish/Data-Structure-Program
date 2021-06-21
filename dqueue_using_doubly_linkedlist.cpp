#include<iostream>
using namespace std;
struct node
{
	int data;
	node *pre;
	node *next;
}*head;

int addrear(int value)
{
	node *temp=new node;
	node *ptr=new node;
	
	if(head==NULL)
	{
		temp->data=value;
		temp->pre=NULL;
		temp->next=NULL;
		head=temp;
		cout<<"null"<<temp->data<<endl;
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

int addfront(int value)
{
	node *temp=new node;
	
	if(head==NULL)
	{
		cout<<"null"<<endl;
		temp->data=value;
		temp->pre=NULL;
		temp->next=NULL;
		head=temp;
	}
	else
	{
		cout<<"Else"<<endl;
		temp->data=value;
		temp->pre=NULL;
		temp->next=head;
		head->pre=temp;
		head=temp;
	}
	return 0;
}

int delfront()
{
	head=head->next;
}

int delrear()
{
	node *temp=new node;
	node *ptr=new node;
	temp=head;
	
	while(temp->next!=NULL)
	{
		ptr=temp;
		temp=temp->next;
	}
	ptr->next=NULL;
		
	
	
}

int display()
{
	node *temp=new node;
	temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->next;
	}
	return 0;
	
}

int main()
{
 	addfront(10);
 	addfront(20);
 	addfront(30);
 	addrear(40);
 	addrear(50);
 	delfront();
 	delrear();
 	delfront();
 	delfront();
 	delfront();
 	delfront();
 	
	display();
	
	return 0;
}

