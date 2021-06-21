#include<iostream>
using namespace std;
int n,top=-1;
int x;
int stack[5];

void push()
{
	if(top==5){
		cout<<"overflow"<<endl;
	}
	else
	{
		cout<<"enter the value :"<<endl;
		cin>>x;
		top=top+1;
		stack[top]=x;
	}
}
int pop()
{
	if(top==-1)
	{
		cout<<"underflow"<<endl;
	}
	else{
		top=top-1;
	}
}
int revstack()
{
	int i;
	int temp[5];
	for(i=4;i>=0; i++)
	{
		temp[i]=stack[i];
	}
	
	for(i=0;i<5; i++)
	{
		stack[i]=temp[i];
	}
		
	for(i=0; i<5; i++)
	{
		cout<<stack[i]<<"  ";
	}
}
 
int main(){
	int j;
	cout<<"1.push:"<<endl;
	cout<<"2.pop:"<<endl;
	cout<<"3.display :"<<endl;
	cout<<"4.Exit :"<<endl;
	do{
	
	cout<<"enter the n number of operation :"<<endl;
	cin>>n;
	switch(n){
		case 1 :push();
		break;
		case 2 : pop();
		break;
		case 3: //display();
		break;
		case 4: revstack();
		break;
		default :
			cout<<"wrong choice"<<endl;
	}

}while(1);
}

