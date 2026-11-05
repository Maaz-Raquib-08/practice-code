#include<iostream>
#include<time.h>
using namespace std;
voidramdo 

int main ()
{
    cout<<"1) quiz with color"<<endl;
    cout<<"2) quiz with random number"<<endl;
    cout<<"3) quiz with place type"<<endl;
    cout<<"4) Exit"<<endl;
    do{
        cout<<"enter your choice : " <<endl;
        cin>> ch;
         switch (ch) {
         case 1: color();
         break;
         case 2: random number();
         break;
         case 3: place();
         break;
         case 4: cout<<"Exit"<<endl;
         break;
         default: cout<<"Invalid choice"<<endl;
      }
   } while(ch!=4);
   return 0;
}
