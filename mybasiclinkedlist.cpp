#include<iostream>
using namespace std;
struct Node
{
int data;
Node *next;	
};
int main(){

Node *head=NULL;
Node *ptr = new Node();
ptr->data =10;
ptr->next=NULL;
head=ptr;
cout<<"the linklist is "<<head->data<<endl;
Node *p =new Node();
p->data=20;
p->next=NULL;
head=p;
cout<<"the linklist is "<<head->data<<endl;
}
