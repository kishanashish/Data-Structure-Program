#include<iostream>
using namespace std;

struct node
{
	int data;
	node *next;
}*head;
void createnode(int value)
{
	node *temp=new node;
	node*ptr=new node;
	if (head==NULL)
	{
		temp->data=value;
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
		ptr->next=NULL;
		temp->next=ptr;
	}
}

void deletenode()
{
	node *temp=new node;
	temp=head;
	if(head==NULL)
		cout<<"\n NO Node present.....!!!"<<endl;
	else
	{
		while(temp->next!=NULL)
		{
			
			temp=temp->next;
		}
		temp->next=NULL;
		cout<<"delete:"<<temp->data<<endl;
		//head=del;
		
	}
	
}

void display()
{
	node *temp=head;
	if(temp==NULL)
		cout<<"No node present...!!"<<endl;
	else
	{
		while(temp!=NULL)
		{
			cout<<"node: "<<temp->data<<endl;
			temp=temp->next;
		}
	}
	
		
	
}
int main()
{
	cout<<"Enter 1 for insert:"<<endl;
	cout<<"Enter 2 for delete:"<<endl;
	cout<<"Enter 3 for display:"<<endl;
	cout<<"Enter 4 for exit:"<<endl;
	
	do{
		int ch;
		cout<<"Enter Your choice :";
		cin>>ch;
		switch(ch)
		{
			case 1: cout<<"Enter Your Value:";
				int value;
				cin>>value;
				createnode(value);
				break;
			case 2:deletenode();
				break;
			case 3: display();
				break;
			case 4:
				exit(0);
				break;
			default: cout<<"You Entered Wrong Choice!!"<<endl;
		}
	}while(1);
}
