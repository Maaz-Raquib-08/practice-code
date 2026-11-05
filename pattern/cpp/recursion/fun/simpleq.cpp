//Simple Queue
#include <iostream>
using namespace std;
int Q[100], n = 100, front = - 1, rear = - 1;
void Insert() {
   int val;
   if (rear == n - 1)
   cout<<"Q Overflow"<<endl;
   else {
      if (front == - 1)
      front = 0;
      cout<<"Insert the element in Q : "<<endl;
      cin>>val;
      rear++;
      Q[rear] = val;
   }
}
void Delete() {
   if (front == - 1 || front > rear) {
      cout<<"Q Underflow ";
      //return ;
   } else {
      cout<<"Element deleted from Q is : "<< Q[front] <<endl;
      front++;
   }
}
void Display() {
   if (front == - 1)
   cout<<"Q is empty"<<endl;
   else {
      cout<<"Q elements are : ";
      for (int i = front; i <= rear; i++)
      cout<<Q[i]<<" ";
         cout<<endl;
   }
}
int main() {
   int ch;
   cout<<"1) Insert element to Q"<<endl;
   cout<<"2) Delete element from Q"<<endl;
   cout<<"3) Display all the elements of Q"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter your choice : "<<endl;
      cin>>ch;
      switch (ch) {
         case 1: Insert();
         break;
         case 2: Delete();
         break;
         case 3: Display();
         break;
         case 4: cout<<"Exit"<<endl;
         break;
         default: cout<<"Invalid choice"<<endl;
      }
   } while(ch!=4);
   return 0;
}