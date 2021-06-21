#include<iostream> 
using namespace std;
 int main()
 {
 	int i,j, n[5], min, k;
 	cout<<"Enter 5 Number For Selection Sort:"<<endl;
 	for(i=0; i<5; i++)
 	{
 		cin>>n[i];
	 }
	 
	 for(j=0; j<5; j++)
	 {
		 min=j;
		 for(i=j+1; i<5; i++)
		 {
		 	if(n[i]<n[min])
		 	{
		 		min=i;
		 	}
			
		 }
		 swap(n[j],n[min]);
		 
		cout<<"Itteration - "<<j+1<<endl;
		for(k=0; k<5; k++)
		{
			cout<<n[k]<<"\t";
			
		}
		cout<<"Minimum Value= "<<n[j];
		cout<<endl;
	}
	
	 
	
 }
