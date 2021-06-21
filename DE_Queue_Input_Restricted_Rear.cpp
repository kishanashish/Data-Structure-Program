//Write a C++ program to implement Double Ended Queue Input Restricted from Rear
#include<iostream>
using namespace std;
int maxsize, arr[20], front=-1, rear=-1;
int addrear()
{
	cout<<"Your can't Input Value from Rear....."<<endl;
	return 0;
}

int addfront()
{
	if(front==0 && rear==maxsize-1)
	{
		cout<<"Queue is full....front!!"<<endl;
		return 0;
	}
		
		
	if(front==-1)
	{
		cout<<"Enter value :";
		int element;
		cin>>element;
		front=0; rear=0;
		arr[0]=element;
		return 0;
	}
	cout<<"Enter value :";
		int element;
		cin>>element;
	front++;
	arr[front]=element;
	
	return 0;
}

int deletefront()
{
	if(front==-1)
	{
		cout<<"\n No Element present in the queue....front!!"<<endl;
		return 0;
	}
		
	
	if(front==rear)
	{
		int temp=arr[front];
		front=-1;rear=-1;
		return temp;
	}
	int temp=arr[front];
	front++;
	return temp;
}

int deleterear()
{
	if(rear==-1)
	{
		cout<<"\n No element present in the queue....rear!!"<<endl;
		return 0;
	}
	if(front==rear)
	{
		int temp=arr[rear];
		front=-1; rear=-1;
		return temp;
	}
	int temp=arr[rear];
	rear--;
	return temp;
}
int display()
{
	if(front==-1 && rear==-1)
	cout<<"\n No element present in the queue.....display!!"<<endl;
	else
	{
		int i;
		for(i=rear; i<=front; i++)
		{
			cout<<"\t"<<arr[i];
		}
		cout<<endl;
	}
}

int main()
{
	cout<<"Double Ended Queue Input Restricted from Rear:"<<endl;
	cout<<"Enter Size of Queue :";
	cin>>maxsize;
	
	cout<<"\nPress 1 for Add from rear side"<<endl;
	cout<<"Press 2 for add from front side"<<endl;
	cout<<"Press 3 for delete from rear side"<<endl;
	cout<<"Press 4 for delete from front side"<<endl;
	cout<<"Press 5 for Display"<<endl;
	cout<<"Press 6 for Exit\n"<<endl;
	do{
		int c;
		cout<<"Enter Your Choice :";
		cin>>c;
		switch(c)
		{
			case 1:addrear();
				break;
			case 2:addfront();
				break;
			case 3:cout<<"Delete element from rear side : "<<deleterear()<<endl;
				break;
			case 4:cout<<"Delete element from front side : "<<deletefront()<<endl;
				break;
			case 5: display();
				break;
			case 6:exit(0);
			default: cout<<"Wrong Choice !!!!"<<endl;
			
		}
	}while(1);
}
