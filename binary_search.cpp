#include<iostream>
using namespace std;
int main()
{
	int fn=0,ln=0,mn=0,i,j,n[5],temp,s;
	cout<<"Enter 5 value"<<endl;
	for(i=0; i<5; i++)
	{
		cin>>n[i];
	}
	for(i=0; i<5; i++)
	{
		for(j=i+1; j<5; j++)
		{
			if(n[i]>n[j])
			{
				temp=n[i];
				n[i]=n[j];
				n[j]=temp;
			}
		}
	} 
	
	cout<<"Enter search value"<<endl;
	cin>>s;
	fn=0; ln=4; mn=(fn+ln)/2;
	
	while(fn<=ln)
	{
		if(n[mn]==s)
		{
			cout<<"search value is find = "<<n[mn];
			break;
		}
		else if( s>n[mn])
		{
			fn=mn+1;
			
		}
		else if(s<n[mn])
			{
				ln=mn-1;
				 
			}
			
		mn=(fn+ln)/2;
	}
		
	if(fn>ln)
	cout<<"search not found";
	
	return 0;
}

