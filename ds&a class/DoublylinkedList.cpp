/* Doubly Linked List Operations:
Insert a new node at Head
Insert a new node at End
Insert a new node at a given position
Delete a node at Head
Delete a node at End
Delete a node at a given position
Update a node element at given position
*/
#include<iostream>
#include<cstdlib>
using namespace std;

class Node
{
	public:
		int val;
		Node* prev;
		Node* next;
		
	Node(int data)
	{
		val=data;
		prev=NULL;
		next=NULL;
	}
};
class DlinkList
{
	public:
		Node* head;
		Node* tail;
	DlinkList()
	{
		head=NULL;
		tail=NULL;
	}	
	void insertAtHead(int val)
	{
		Node* new_node=new Node(val);
		if(head==NULL)
		{
			head=new_node;
			tail=new_node;
			return;
		}
		new_node->next=head;
		head->prev=new_node;
		head=new_node;
		return;
	}
	void insertAtTail(int val)
	{
		Node* new_node=new Node(val);
		if(tail==NULL)
		{
			head=new_node;
			tail=new_node;
			return;
		}
		new_node->prev=tail;
		tail->next=new_node;
		tail=new_node;
		return;
	}
	void insertAtPosition(int val, int p)
	{
		Node* temp=head;
		int count=1;
		while(count<(p-1))
		{
			temp=temp->next;
			count++;
		}
		Node* new_node=new Node(val);
		new_node->next=temp->next;
		temp->next=new_node;
		new_node->prev=temp;
		new_node->next->prev=new_node;
		return;
	}
	void deleteAtStart()
	{
		if(head==NULL)
		{
			cout<<"Empty";
			return;
		}
		Node* temp=head;
		head=head->next;
		if(head==NULL)
		{
			tail=NULL;
			cout<<"Empty";
		}
		else{
			head->prev=NULL;
		}
		free(temp);
	}
	void deleteAtEnd()
	{
		if(head==NULL)
		{
			cout<<"Empty";
			return;
		}
		Node* temp=tail;
		tail=tail->prev;
		if(tail==NULL)
		{
			head=NULL;
			cout<<"Empty";
		}
		else
		{
			tail->next=NULL;
		}
		free(temp);
	}
	void deleteAtPosition(int k)
	{
		Node* temp=head;
		int counter=1;
		while(counter<k)
		{
			temp=temp->next;
			counter++;
		}
		temp->prev->next=temp->next;
		temp->next->prev=temp->prev;
		free(temp);
	}
	void display()
	{
		Node* temp=head;
		while(temp!=NULL)
		{
			cout<<temp->val<<" ";
			temp=temp->next;
		}cout<<endl;
	}
};
int main()
{
	Node* new_node=new Node(3);
	DlinkList obj;
	obj.head=new_node;
	obj.tail=new_node;
	cout<<obj.head->val<<endl;
	
	obj.insertAtHead(2);
	obj.display();
	obj.insertAtHead(1);
	obj.display();
	
	obj.insertAtTail(4);
	obj.display();
	
	obj.insertAtPosition(20,2);
	obj.display();
	
	obj.deleteAtStart();
	obj.display();
	
	obj.deleteAtEnd();
	obj.display();
	
	obj.deleteAtPosition(2);
	obj.display();
	

	return 0;
}
