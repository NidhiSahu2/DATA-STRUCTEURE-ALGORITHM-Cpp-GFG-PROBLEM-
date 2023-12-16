#include<iostream>
#include<map>
using namespace std;
//using class in linklist//
class Node
{
	public:
		int data;
		Node* next;
		//constructor//
		Node(int data)
		{
			this->data=data;
			this->next=NULL;
    	}
};
/*destructor
~Node()

{
	int value=this->data;
	//memory free//
	if(this->next!=NULL)
	{
		delete next;this->next=NULL;
		
	}
	cout<<"memory is free for node with no data"<<value<<endl;
}*/
void InsertHead(Node* &head,int d)
{
	Node* temp=new Node(d);
	temp->next=head;
	head=temp;
	
}
void insertTail(Node*&tail,int d)
{
	Node*temp=new Node(d);
	tail->next=temp;
	tail=temp;
}
void print(Node* &head)
{
	if(head==NULL)
	{
		cout<<"empty list"<<endl;
		return ;
	}
	Node*temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

int main()
{
	Node* node1=new Node(10);
	cout<<node1->data<<endl;
	cout<<node1->next<<NULL;
	return 0;
	
	
}





