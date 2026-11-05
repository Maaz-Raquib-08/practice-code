/* C++ program to implement basic stack operations without switch case */
#include<iostream>  
using namespace std; 
#define MAX 50
class Stack 
{ 
	public: 
		int top; 
    	int a[MAX]; // Maximum size of Stack 
    	
    	Stack() 
		{ 
			top = -1; 
		} 
    	int push(int x); 
    	int pop(); 
    	int peek(); 
    	int isEmpty(); 
};   
int Stack::push(int x) 
{ 
    if (top >= (MAX-1)) 
	{ 
        cout << "Stack Overflow"; 
        return false; 
    } 
    else 
	{ 
        a[++top] = x; 
        cout << x << "Pushed/Added into stack\n"; 
        return true; 
    } 
}   
int Stack::pop() 
{ 
    if (top<0) 
	{ 
        cout << "Stack Underflow"; 
        return 0; 
    } 
    else 
	{ 
        int x = a[top--]; 
        return x; 
    } 
} 
int Stack::peek() 
{ 
    if (top < 0) 
	{ 
        cout << "Stack is Empty"; 
        return 0; 
    } 
    else 
	{ 
        int x = a[top]; 
        return x; 
    } 
}   
int Stack::isEmpty() 
{ 
    return (top < 0); 
}   
// To test above functions 
int main() 
{ 
    class Stack s; 
    s.push(10); 
    s.push(20); 
    s.push(30); 
    cout << s.pop() << " Popped from stack \n"; 
    cout<< "Top Item is "<<s.a[s.top];
    cout<<"\n"<<s.peek();
    return 0; 
} 