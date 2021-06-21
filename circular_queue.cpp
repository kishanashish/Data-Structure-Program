//Write a C++ program to implement Circular Queue operations.
#include<iostream>
using namespace std;
//#define N 5;
int n=5;
int arr[5],rear=-1, front=-1,temp;
enqueue()
{
	if((rear+1)%n==front)
	{
		cout<<"Queue is Full....!!"<<endl;
	}
	else if(front==-1 && rear==-1)
	{
		cout<<"Enter value :";
		int value;
		cin>>value;
		front=rear=0;
		arr[rear]=value;
	}
	else
	{
		cout<<"Enter value :";
		int value;
		cin>>value;
		rear=(rear+1)%n;
		arr[rear]=value;
	}
	return 0;	
}
dequeue()
{
	if(front==-1 && rear==-1)
		cout<<"No element in the Queue :"<<endl;
	
	else if(front==rear)
	{
		cout<<"Deleted element :"<<arr[front]<<endl;
		front=rear=-1;
		
	}
	else
	{
		cout<<"Deleted element :"<<arr[front]<<endl;
		front=(front+1)%n;
	}
	
	return 0;
}
int display()
{
	int i=front;
	if(front==-1 && rear==-1)
		cout<<"No Element present in queue...!!"<<endl;
	else
	{
		cout<<"\n Queue is"<<endl;
		while(i!=rear)
		{
			cout<<arr[i]<<endl;
			i=(i+1)%n;
		}
		cout<<arr[rear]<<endl;
	}
	return 0;
}



int main()
{
	cout<<"\nPress 1 for Add  "<<endl;
	cout<<"Press 2 for Delete"<<endl;
	cout<<"Press 3 for Display"<<endl;
	cout<<"Press 4 for Exit"<<endl;
	
	do{
		int c;
		cout<<"Enter Your Choice :";
		cin>>c;
		switch(c)
		{
			case 1:enqueue();
				break;
			case 2:dequeue();
				break;
			case 3:display();
				break;
			case 4:exit(0);
			default: cout<<"Wrong Choice !!!!"<<endl;
			
		}
	}while(1);
}
