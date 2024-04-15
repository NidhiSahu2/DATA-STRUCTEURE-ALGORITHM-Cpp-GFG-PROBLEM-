#include<iostream>
using namespace std;
class Node
{
	int data;
	Node* next;
Node (int value)
{
	data=value;
	next=NULL;
}	
};
void insertHead(node* &head,int val)
{
	node* ttemp=new Node(value);
	if(head==NULL)
	}
	while(temp->next!=head)
	{
		temp=temp->next;
		
	}
	temp->next=ttemp;
	ttemp->next=head;
	head=ttemp;
	
	
}
void insertnodeatTail(node* &head,int value)
{
	if(head==NULL)
	{
		insertHead(head,value);
		return;
	}
}
{
	node*ttemp=new Node(value);
	node *temp=head;
	while(temp->next!=head)
	{
		temp=temp->next;
		
	}
	temp->next=ttemp;
	ttemp->next=head;
}
