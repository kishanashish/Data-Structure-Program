#include<iostream>
using namespace std;
	int partition(int arr[],int s,int e)
	{
		int pivot=arr[e];
		int pindex=s;
		int temp=0;int i;
		cout<<"Pivot value:"<<pivot<<endl;
		for(int i=s;i<=e-1;i++)
		{
			if(arr[i]<=pivot)
			{
			   temp=arr[i];
			   arr[i]=arr[pindex];
			   arr[pindex]=temp;
			   pindex++;
			 
			  }
			  
		
		}
		
		temp=arr[e];
		arr[e]=arr[pindex];
		arr[pindex]=temp;
	return pindex;	
}
void quicksort(int arr[],int s,int e)
	{
		if(s<e)
		{
		  int	p=partition(arr,s,e);
		  
			quicksort(arr,s,(p-1));
			quicksort(arr,(p+1),e);
			
		}
		
	}

int main()
{ 
	int n;
	cout<<"Enter the size of an Array"<<endl;
	cin>>n;
	int arr[n],i;
	int e=n-1;
	int s=0;
	cout<<"Enter the elements of Array"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"After Quick Sort"<<endl;
	
	quicksort(arr,s,e);
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
		return 0;
}
