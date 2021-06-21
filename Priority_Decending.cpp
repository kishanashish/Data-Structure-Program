//WAP to Implement Priority Queue operations in Descending Order.

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;
struct n  
{
   int p;
   int info;
   struct n *l;
};
class Priority_Queue {
   private:
      
      n *f;
   public:
      Priority_Queue() 
	  {
         f = NULL;
      }
      void insert(int i, int p) {
         n *t, *q;
         t = new n;
         t->info = i;
         t->p = p;
         if (f == NULL || p < f->p) {
            t->l= f;
            f = t;
         } else {
            q = f;
            while (q->l != NULL && q->l->p <= p)
               q = q->l;
               t->l = q->l;
               q->l = t;
         }
      }
      void del() {
         n *t;
         if(f == NULL) 
            cout<<"Queue Underflow\n";
         else {
            t = f;
            cout<<"Deleted item is: "<<t->info<<endl;
            f = f->l;
            free(t);
         }
      }
      void show() 
	  {
	  
         n *ptr;
         ptr = f;
         if (f == NULL)
            cout<<"Queue is empty\n";
         else {
            cout<<"Queue is :\n";
            cout<<"Priority Item\n";
            while(ptr != NULL) {
               cout<<ptr->p<<" "<<ptr->info<<endl;
               ptr = ptr->l;
            }
         }
      }
};
int main() 
{
   int c, i, p;
   Priority_Queue pq;
   cout<<"\nPress 1 for Add  "<<endl;
	cout<<"Press 2 for Delete"<<endl;
	cout<<"Press 3 for Display"<<endl;
	cout<<"Press 4 for Exit"<<endl;
   do
   {
      cout<<"Enter your choice : ";
      cin>>c;
      switch(c) {
         case 1:
            cout<<"Input the item value to be added in the queue : ";
            cin>>i;
            cout<<"Enter its priority : ";
            cin>>p;
            pq.insert(i, p);
            break;
         case 2:
            pq.del();
            break;
         case 3:
            pq.show();
            break;
         case 4:
            break;
         default:
         cout<<"Wrong choice\n";
      }
   }
   while(c!= 4);
   return 0;
}

