#include<stdio.h>
#include<conio.h>
int top=-1;
#define SIZE 10
char stack[SIZE];
void push(char );
void pop();
void main()
{
   char s[10];
   int k=0,z=0,i=0;
   clrscr();
   printf("\n Given expression:");
   scanf("%s",s);
   while(s[i]!='\0')
    {
       if(s[i]=='{'||s[i]=='('||s[i]=='[')
       {
	 push(s[i]);
	 k++;
       }
       else if(s[i]=='}'||s[i]==')'||s[i]==']')
       {
	 pop();
	 z++;
       }
      i++;
    }
    if(top==-1)
      printf("\n balanced");
    else
      printf("\n not balanced");

    getch();
}
void push(char c)
{
   top++;
   stack[top]=c;
   printf("\nInserted");
}
void pop()
{
   top--;
   printf("\nRemoved");
}












