#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node *next;
		Node *prev;
	Node(int value)	
	{
		data=value;
		next=NULL;
		prev=NULL;
	}
		
		
};
int main()
{
	Node *head=NULL,*tail=NULL;
	//creat a doubly linked list//
	int arr[]={1,2,3,4,5};
	for(int i=0; i<=5; i++)
	{
	// if linked dosen't exit//
	if(head==NULL)
	{
		head=new Node(arr[i]);
		tail=head;
	}
	//exit karti h//
	else
	{
		Node*temp = new Node(arr[i]);
		tail->next = temp;
		temp->prev=tail;
		tail=temp;
	}
		
	}
	
	Node *trav =head;
	while(trav)
	{
		cout<<trav->data<<" "<<endl;
		trav=trav->next;
	}
}
