#include<iostream>
using namespace std;
int main(){
	 int i,id[5];
	 string n[5];
	 cout<<"enter id and name"<<endl;
	 for(i=0;i<=4;i++){
	 	cin>>id[i];
	 	cin>>n[i];
	 }
	 cout<<"all data"<<endl;
	 for(i=0;i<=4;i++){
	 	cout<<id[i];
	 	cout<<n[i];
	 }
	 
return 0;
}
