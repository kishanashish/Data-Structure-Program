#include<iostream>
using namespace std;

class First
 {
 	public:
 	First(){
 		cout<<"no-parameterized constreuctor"<<endl;
 		//First f1;
	 }
	 First(int a){
	 	cout<<"parameterized const"<<endl;
	 	
	 }
 };
 int main(){
 	First f1;
 	First f2h;
 	First f3(10);
 }

