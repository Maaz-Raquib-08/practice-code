/* Linked List Operations:
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
		Node* next;
		
	Node(int data)
	{
		val=data;
		next=NULL;
	}
};
//Inserting a new node at begining/head of the link list
void insertAtHead(Node* &head, int val)
{
	Node* new_node=new Node(val);
	new_node->next=head;
	head=new_node;
}

//Inserting a new node at end/Tail of the link list
void insertAtTail(Node* &head, int val)
{
	Node* new_node=new Node(val);
	Node* temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=new_node;
}

//Inserting a new node at given position of the link list
void insertAtPosition(Node* &head, int val, int pos)
{
	if(pos==0)
	{
		insertAtHead(head,val);
		return;
	}
	Node* new_node=new Node(val);
	Node* temp=head;
	int current_pos=0;
	while(current_pos!=pos-1)
	{
		temp=temp->next;
		current_pos++;
	}
	new_node->next=temp->next;
	temp->next=new_node;
}

//Deleting a node at begining of the link list
void deleteAtHead(Node* &head)
{
	Node* temp=head;
	head=head->next;
	free(temp);
}

//Deleting a node at end/Tail of the link list
void deleteAtTail(Node* &head)
{
	Node* second_last=head;
	while(second_last->next->next!=NULL)
	{
		second_last=second_last->next;
	}
	Node* temp=second_last->next;// This node to be deleted
	second_last->next=NULL;
	free(temp);
}

//Deleting a node at given position of the link list
void deleteAtPosition(Node* &head, int pos)
{
	if(pos==0)
	{
		deleteAtHead(head);
		retun;
	}
	int current_pos=0;
	Node* prev=head;
	while(current_pos!=pos-1)
	{
		prev=prev->next;
		current_pos++;
	}
	//prev is pointing to node at pos-1
	Node* tem=prev->next;
	prev->next=prev->next->next;
	free(temp);
}

void display(Node* head)
{
	Node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->val<<"->";
		temp=temp->next;
	}
	cout<<"NULL<<endl;
}
int main()
{
	Node* head=NULL;
	insertAtHead(head, 20);
	display(head);
	insertAtHead(head, 10);
	display(head);
	
	insertAtTail(head, 30);
	display(head);
	
	insertAtPosiion(head,25,1);
	display(head);
	
	deleteAtHead(head);
	display(head);	
	
//	deleteAtTail(head);
//	display(head);
	
	deleteAtPosition(head,1);
	display(head)

	return 0;
}
