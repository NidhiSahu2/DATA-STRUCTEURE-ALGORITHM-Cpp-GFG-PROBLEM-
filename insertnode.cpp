#include <iostream>
using namespace std;

//Creating Node Structure
struct Node{
 int data;
 Node *next;
};
//creating head pointer and equating to NULL
Node *head=NULL;

//Function to insert at the beginning of linked list
void insertBeg (int d)
{
 Node *ptr = new Node();
 ptr->data=d;
 ptr->next=head;
 head=ptr;
}
//Function to insert at the end of linked list
void insertEnd (int d)
{
  Node *ptr = new Node();
  ptr->data=d;
  ptr->next=NULL;

  //If list is empty
  if(head==NULL)
  head=ptr;
  //else list is not empty
  else
  {
   Node *temp = head;
   while(temp->next != NULL)
   {
    temp=temp->next;
   }
   temp->next=ptr;

  }

}
//Function to display linked list
void dispLink()
{
 Node *temp=head;
 while(temp!=NULL)
 {
  cout<<temp->data<<" ";
  temp=temp->next;
 }
 cout<<"\n";
}
//Main Function
int main()
{
 insertBeg(2);
 insertBeg(1);
 insertEnd(3);
 dispLink();
 return 0;
}
