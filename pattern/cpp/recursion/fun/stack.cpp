#include<iostream>
using namespace std;
int stack[5],top=-1,n=5;
void push(int x){
if(top==n-1)

    cout<<"stack is overflow"<<endl;

else
    top++;
    stack [top]=x;

}
void display()
{
   if(top==-1){
        cout<<"stack is empty"<<endl;
}
else
    cout<<"stack element are"<<endl;
    for( int i=top;i>=0;i--)
    {
        cout<<stack[i]<<endl;
    }
}
void pop(){
if (top==-1)
cout<<"stack is empty"<<endl;
else
    cout<<" the poped element is"<<stack[top]<<endl;
    --top;
    }
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
   // push(9);
    //push(11);
    display();
    pop();
    pop();
}