#include<iostream>
using namespace std;
int main()
{
int arr[5],s=0,f=0,i;
cout<<"enter the 5 elemrnt";
for(i=0;i<5;i++)
cin>>arr[i];
cout<<"enter your search value";
cin>>s;
for(i=0; i<5; i++)
{
if(arr[i]==s)
f=1;
}
if(f<=1)
cout<<"Search element is found "<<endl;
else
cout<<"Search element is not found "<<endl;
return 0;
}
