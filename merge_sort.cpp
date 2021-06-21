#include<iostream>
using namespace std;
void merge1(int arr1[],int l, int mid, int r)
{
	int i=l;
	int j=mid+1;
	int k=l;
	int temp[5];
	while(i<=mid && j<=r)
	{
		if(arr1[i]<=arr1[j])
		{
			temp[k]=arr1[i];
			i++;
			k++;
		}
		else
		{
			temp[k]=arr1[j];
			j++;
			k++;
		}
	}
	while(i<=mid)
	{
		temp[k]=arr1[i];
		i++;
		k++;
	}
	while(j<=r)
	{
		temp[k]=arr1[j];
		j++;
		k++;
	}	
	cout<<"\nIteration"<<endl;
	for(int s=l;s<=r;s++)
	{
		cout<<temp[s]<<"\t";
		arr1[s]=temp[s];
	}
	cout<<endl;
}
void mergeSort(int arr1[], int l, int r)
{ 
	if(l<r)
 	{
    	int m= (l+r)/2;
     	mergeSort(arr1,l,m);
     	mergeSort(arr1, m+1,r);
     	merge1(arr1,l,m,r);
 	}
}
int main()
{
	int i,j,l;
	int arr[5];
	cout<<"Enter element in array"<<endl;
	for( i=0;i<5;i++)
	{
		cin>>arr[i];
		
	}
	cout<<"Before sort:"<<endl;
	for (i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	mergeSort(arr,0,4);	
	return 0;
}

