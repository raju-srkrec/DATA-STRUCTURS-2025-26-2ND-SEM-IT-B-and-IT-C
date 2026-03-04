#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void clist();
void display();
void count();
void  search();
void minlist();
void maxlist();
void modify();
struct node
{
  int data;
  struct node *next;
}*h=NULL,*t;
void main()
{
  int n,i;
  clrscr();
   printf("\nEnter how many nodes u want to create");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     clist();
   }
   display();
   count();
   search();
   minlist();
   maxlist();
   modify();
   display();
  getch();
}
void clist()
{
   struct node *newnode;
   newnode= (struct node*)malloc(sizeof(struct node));
   if(h==NULL)
   {
     printf("Enter data u want to insert into node");
     scanf("%d",&newnode->data);
     newnode->next=NULL;
     h=newnode;
   }
   else
   {
     printf("Enter data u want to insert into node");
     scanf("%d",&newnode->data);
     newnode->next=h;
     h=newnode;

   }
}
void display()
{
    struct node *t;
    t=h;
    if(h==NULL)
     printf("\n No elements in the list");
    else
     {
       printf("\n");
       while(t!=NULL)
       {
	  printf(" %d-->",t->data);
	  t=t->next;
       }
     }
}
void count()
{
    int k=0;
    struct node *t;
    t=h;
    if(h==NULL)
     printf("\n No elements in the list");
    else
     {
       while(t!=NULL)
       {
	  t=t->next;
	  k++;
       }
     }
     printf("\n Number of elements in the list %d",k);
}
void search()
{
    int k;
    struct node *t;
    t=h;
    printf("\nEnter searching elememnt in the list");
    scanf("%d",&k);
    if(h==NULL)
     printf("\n No elements in the list");
    else
     {
       while(t!=NULL)
       {
	  if(t->data==k)
	  {
	    printf("\n Element found");
	    break;
	  }
	  t=t->next;
       }
       if(t->next==NULL)
	 printf("\n Element not found in the list");
     }
}
void minlist()
{
    int min;
    struct node *t;
    t=h;
    if(h==NULL)
     printf("\n No elements in the list");
    else
     {
       min=h->data;

       while(t!=NULL)
       {
	  if(t->data<min)
	  min=t->data;
	  t=t->next;
       }
      }
    printf("\n Minimum element in the list %d", min);
}
void maxlist()
{
    int max;
    struct node *t;
    t=h;
    if(h==NULL)
     printf("\n No elements in the list");
    else
     {
       max=h->data;

       while(t!=NULL)
       {
	  if(t->data>max)
	  max=t->data;
	  t=t->next;
       }
      }
    printf("\n Maximum element in the list %d", max);
}
void modify()
{
    int k,p,i;
    struct node *t;
    t=h;
    printf("\nEnter  elememnt in the list to modify in the list");
    scanf("%d",&k);
    printf("\nEnter position to u want to modify");
    scanf("%d",&p);
	for(i=0;i<p;i++)
       {
	  if(t!=NULL)
	  {
	    printf("\n NO ElementS in the list");
	    break;
	  }
	  t=t->next;
       }
       t->data=k;

}
