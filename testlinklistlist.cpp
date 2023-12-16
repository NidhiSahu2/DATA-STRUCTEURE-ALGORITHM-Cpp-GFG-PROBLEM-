#include<iostream>
using namespace std;
struct Node{
	int data;
	Node*next;*link;	
};
Node *head=NULL;

void insertBeg(int d)
{

Node *ptr = new Node ();
ptr->data=d;
ptr->link=head;
head=ptr;
}
int insertEnd(int d)
{
	Node *ptr = new Node();
	ptr->data=d;
	ptr->link=NULL;
	//if your list is empty//
	if(head==NULL)
	{
		head=ptr;
	}
	else{
		Node *temp =head;
		while(temp->link!=NULL)
		{
			temp=temp->link;
			
		}
		temp->link=ptr;
	}
}
void display()
{
	Node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data;
		cout<<temp->link;
		
	}
	cout<<endl;
}
int main()
{
	intsertbeg(2);
	intsertbeg(1);
	intsertEnd(3);
	display();
	return 0;
}
