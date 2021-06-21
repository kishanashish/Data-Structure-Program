#include<iostream> 
using namespace std; 
int top=-1; 
void rev(int tetop,int sta[]){ 
if(tetop!=0){ 
sta[tetop]=sta[tetop-1]; 
rev(tetop-1,sta); 
} 
} 
void push(int sta[],int n){ 
if(top==n-1){ 
cout<<"Stack is full\n"; 
} 
else{ top+=1; 
rev(top,sta); 
cout<<"Enter Element to push:"; 
cin>>sta[0]; 
cout<<"Element pushed\n"; 
} 
} 
void pop(int sta[],int n){ 
if(top==-1){ 
cout<<"Stack is Empty\n"; 
} 
else{ cout<<"Popped Element: "<<sta[top]<<"\n"; 
top--;
} 
} 
void sear(int sta[],int n){ 
int i,el,fl=0; 
cout<<"Enter the Element to search:"; 
cin>>el; 
for(i=0;i<=top;i++){ 
if(sta[i]==el){ 
fl=1; 
break; 
} 
} 
if(fl==1) 
cout<<"Element found at "<<i<<" position\n"; 
else 
cout<<"Element not found\n"; 
} 
void dis(int sta[],int n){ 
if(top!=-1){ 
cout<<"Stack: \n"; 
for(int i=top;i>=0;i--){ 
cout<<sta[i]<<"\n"; 
} 
} 
else 
cout<<"stack is empty\n"; 
}

void cou(){ 
cout<<"\nNo. of Elements in stack is :"<<top+1; 
} 
int main(){ 
int n,ch=0; 
cout<<"Enter the size of the stack:"; 
cin>>n; 
int sta[n]; 
while(ch!=6){ 
cout<<"\nEnter your choice:\n1:Push Element\n2:Pop Element\n3:search\n4:display\n5:count\n6:Exit\n"; 
cin>>ch; 
switch(ch){ 
case 1: push(sta,n); 
break; 
case 2: pop(sta,n); 
break; 
case 3: sear(sta,n); 
break; 
case 4: dis(sta,n); 
break; 
case 5: cou(); 
break; 
case 6: break; 
default : cout<<"Enter correct value\n"; 
break; 
} 
}}

