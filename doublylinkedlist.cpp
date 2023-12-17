/DOUBLY linked list//
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#typedef struct LinkedList
{
	int data;
	struct LinkedList
	*next *prev;
}node;
node
*first ,*temp,*ttemp,*p,*q,*r,*ptemp,*pttemp;
void init()
{
	first=temp=ttemp=null;
}
//add before//
int  addbefore_first(int val)
{
	temp(*node)malloc(sizeof(node));
	temp->data=val;
	temp->next=temp;
	temp->prev=null;
	frist=temp;
		
}
int count()
{
	int n=0;
	if(first!=null)
	{
		temp=first;
		while(temp!=null)
		{
			temp=temp->next;
			n++;
		}
	}
	return n;
}
int data_found(int n)
{
	temp=first;
	while(temp!=null){
	if(temp->data==n)	
	{
		return 1;
	}
	temp=temp->next;
		
	}
	
return 0;
}
//add node//

void addnode(int val)
{
	ttemp(*node)malloc(sizeof(node));
	ttemp->data=val;
	ttemp->next=null;
	ttemp->prev=temp;
	temp->next=ttemp;
}
//now start swaping //

void swap_first_last()
{
	temp=first;
	p=temp->next;
	while(temp->next!=null)
	temp=temp->next;
	q=temp->prev;
	q->next=first;
	first->prev=q;
	first->next=null;
	temp->next=p;
	p->prev=temp;
	temp->prev=null;
	first=temp;
	
	
}
//add after anywhare//
void addafter(int x int y)
{
	temp=first;
	while(temp->data=x)
	{
		temp=temp->next;
	}
	
	ttemp=temp->next;
	p(node*)malloc(siseof(node));
	p->data=y;
	p->next=temp;
	p->prev=ttemp;
	p->next=p;
	p->prev=temp;
}
//add before//
void addbefore(int x int y)
{
	ttemp=temp=first;
	while(temp->data!=x)
	{
		temp=temp->next;
	}
	ttemp=temp->prev;
	p=(node*)malloc(sizeof(node));
	p->data=y;
	p->next=temp;
	p=prev=ttemp;
	ttemp->next=p;
	p->prev=ttemp;
}
//void delafter//
void deletfter(int x)
{
	temp=first;
	while(temp->data!=x)
	{
		temp=temp->next;
		
	}
	p=temp->next;
	q=p->next;
	temp->next=q;
	q->prev=temp;
	p->next=null;
	p->next=null;
	free(p);
	
}
//void delbefore//
void delbefore(int x)
{
	temp=first;
	while(temp->data!=x) 
	{
		temp=temp->next;	
		} 
	p=temp->prev;
	ttemp=p->prev;
	ttemp->next=temp;
	temp->prev=ttemp;
	//spcific property//
	p->next=p->prev=null;
	free(p);
	
		                                   
	
}
//void create frist//
void creat_first(int val)
{
	frist(node*)malloc(siseof(node))
	frist->data=val;
	frist->next=frist
	prev=null;
	//spcific property//
}
voud disp()
{
	temp=first;
	while(temp!=null)
	{
		printf("\n %d,temp->data");
		temp=temp->next;
	}
}
