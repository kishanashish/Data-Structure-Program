#include<iostream>
using namespace std;
int front=-1, rear=-1,queue[20],maxsize;

int enqueue()
{
	if(rear==maxsize-1)
	cout<<"Queue is Full !!"<<endl;
	else
	{
		if(front==-1 && rear==-1)
			front=0;
		cout<<"Enter Value for Add in the queue ::";
		int n;
		cin>>n;
		rear=rear+1;
		queue[rear]=n;
	}
	return 0;
}
int dqueue()
{
	if(front==-1 && rear==-1 ||front>rear)
		cout<<"No element present in Queue "<<endl;
	else
	{
		if(front==0 && rear==0)
		{
			cout<<"Deleted Element is "<<queue[front]<<endl;
			front=rear=-1;
		}
		else
		{
			cout<<"Deleted Element is "<<queue[front]<<endl;
			front=front+1;
		}
	}
	return 0;
}

int search()
{
	if(front==-1 && rear==-1 ||front>rear)
	{
		cout<<"No element in Queue"<<endl;
		cout<<"You can't search any value"<<endl;
	}
	else
	{
		cout<<"Enter search value :";
		int i,svalue,flag=0;
		cin>>svalue;
		for(i=front; i<=rear; i++)
		{
			if(queue[i]==svalue)
				flag=1;
		}
		if(flag==1)
			cout<<"Search element is found ...."<<endl;
		else
			cout<<"Search element is not found...."<<endl;
	}
	return 0;
}
int display()
{
	if(front==-1 && rear==-1 ||front>rear)
	cout<<"No Element present in queue!!"<<endl;
	else
	{
		int j;
		for(j=front; j<=rear; j++)
			cout<<queue[j]<<"\t";
			cout<<endl;
	}
	return 0;
}

int main()
{
	cout<<"Enter Size of Queue :";
	cin>>maxsize;
	
	cout<<"\nPress 1 for Addition"<<endl;
	cout<<"Press 2 for Delete"<<endl;
	cout<<"Press 3 for Searchibg"<<endl;
	cout<<"Press 4 for Display"<<endl;
	cout<<"Press 5 for Exit"<<endl;
	do{
		int c;
		cout<<"Enter Your Choice :";
		cin>>c;
		switch(c)
		{
			case 1:enqueue();
				break;
			case 2:dqueue();
				break;
			case 3:search();
				break;
			case 4:display();
				break;
			case 5:exit(0);
			default: cout<<"Wrong Choice !!!!"<<endl;
			
		}
	}while(1);
}
