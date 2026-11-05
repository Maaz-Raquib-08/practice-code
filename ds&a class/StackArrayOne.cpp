/* C++ program to implement basic stack operations */
#include<iostream>  
using namespace std; 
#define MAX 5
  
class Stack 
{ 
	public: 
		int top; 
    	int a[MAX]; // Maximum size of Stack 
    	
    	Stack() 
		{ 
			top = -1; 
		} 
    	void push(); 
    	void pop(); 
    	void display();
    	void peek(); 
    	int isEmpty(); 
}; 
  
void Stack::push() 
{ 
    int pushed_item;
	if(top == (MAX-1))
		cout<<"Stack Overflow\n";
	else
	{
		cout<<"Enter the item to be pushed in stack : ";
		cin>>pushed_item;
		top=top+1;
		a[top] = pushed_item;
	}
} 
void Stack::pop() 
{ 
	if(top == -1)
		cout<<"Stack Underflow\n";
	else
	{
		cout<<"Popped element is : "<<a[top]<<"\n";
		top=top-1;
	}
} 
void Stack::display()
{
	int i;
	if(top == -1)
		cout<<"Stack is empty\n";
	else
	{
		cout<<"Stack elements :\n";
		for(i = top; i >=0; i--)
			cout<<"\n"<<a[i];
	}
}
void Stack::peek() 
{ 
    if (top < 0) 
	{ 
        cout << "Stack is Empty"; 
    } 
    else 
	{ 
        int x = a[top];
		cout<<"Top Element is: "<<x;  
    } 
} 
int Stack::isEmpty() 
{ 
    return (top < 0); 
} 
int main() 
{ 
    class Stack s; 
    int choice;
   // int a;
//    cout<<"Enter the value";
 //   cin>>a;
//    cout<<a;

	do{
		cout<<"\n1.Push\n";
		cout<<"2.Pop\n";
		cout<<"3.Display\n";
		cout<<"4.Display Top Element\n";
		cout<<"5.Quit\n";
		cout<<"Enter your choice : ";
		cin>>choice;
		switch(choice)
		{
			 case 1 :
				s.push();
				break;
			 case 2:
				s.pop();
				break;
			 case 3:
				s.display();
				break;
			 case 4:
			 	s.peek();
			 	break;
			 case 5:
	            break;//exit(0);
			 default:
				cout<<"Wrong choice\n";
				break;
		}
	}while(choice!=5);
    return 0; 
}


