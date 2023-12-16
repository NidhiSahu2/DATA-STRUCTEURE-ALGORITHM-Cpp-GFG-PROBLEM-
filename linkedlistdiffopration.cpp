
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#define null 0
 struct node
{
  int data;
  node *next;
};
node *first,*temp,*ttemp,*p,*q,*r,*ptemp,*pttemp,
*ntemp,*nttemp;

void init()
{
 first=temp=ttemp=null;
}
void addnode(int val)
{
  temp=first;
  while(temp->next!=null)
  {
  temp=temp->next;

  }
  ttemp=(node*)malloc(sizeof(node));
  ttemp->data=val;
  ttemp->next=null;
  temp->next=ttemp;
}
void createfirst(int val)
{
 first=(node*)malloc (sizeof(node));
  first->data=val;
  first->next=null;
}
void disp()
{
 temp=first;
 while(temp!=null)
 {
   printf("\n%d",temp->data);
   temp=temp->next;
 }
}
void sum()
{
	int s=0;
	temp=first;
	while(temp!=null)
	{
		s=s+temp->data;
		temp=temp->next;
	}
	printf("\nsum is %d",s);
}
void addafter(int x,int y)
{   temp=first;
   while(temp->data!=x)
   {
    temp=temp->next;
   }
   {
   ttemp=temp->next;
   p=(node*)malloc
   (sizeof(node));
   p->data=y;
   p->next=ttemp;
   temp->next=p;
   }

}
void addbefore(int x,int y)
{
  ttemp=temp=first;
   while(temp->data!=x)
   {
     ttemp=temp;
    temp=temp->next;
   }
  {
   p=(node*)malloc
   (sizeof(node));
   p->data=y;
   p->next=temp;
   ttemp->next=p;
   }

}

void delafter(int x)
{
   temp=first;
   while(temp->data!=x )
   {
    temp=temp->next;
   }
   p=temp->next;
  q=p->next;
  temp->next=q;
  p->next=null;
  free(p);
  

}
void delbefore(int x)
{
    temp=first;
   while(temp->next->data!=x)
   {
    ttemp=temp;
    temp=temp->next;
   }
  p=temp->next;
  ttemp->next=p;
 temp->next=null;
   free(temp);
   }


int main()
{
  int n,m;
  char i;
  //clrscr();
printf("\nEnter data for first node :");
  scanf("%d",&n);
  createfirst(n);
  printf("\nFirst Node Created :\n");
  while(1)
  {
  printf("\nDo u Want to continue :");
  scanf(" %c",&i);
  if(i=='n' ||i=='N')
  break;
  printf("\n Enter Data for New Node :");
  scanf("%d",&n);
  addnode(n);

  }
  printf("\nThis Is Your Final List :");
  disp();
  sum();
  printf("\nEnter Data after which u \
   want to add new node   :" );
  scanf("%d",&n);
  printf("\nenter data for new node  :");
  scanf("%d",&m);
  addafter(n,m);
  printf("\nNow list is\n");
  disp();
  printf("\nEnter Data before which u want to add new node   :" );
  scanf("%d",&n);
  printf("\nenter data for new node  :");
  scanf("%d",&m);
  addbefore(n,m);
  printf("\nNow list is\n");
  disp();
  printf("\nEnter Data after which \
  u want to delete node   :" );
  scanf("%d", &n);
  delafter(n);
  disp(); 
  printf("\nEnter Data befor which u want to delete node   :" );
  scanf("%d",&n);
  delbefore(n);
  disp();
  getch();
}


