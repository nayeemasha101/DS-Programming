#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int MAXSIZE;       
int stack[500],data = 0;     
int top = 0;

int isempty() {

   if(top == 0)
      return 1;
   else
      return 0;
}
   
int isfull() {

   if(top == MAXSIZE)
      return 1;
   else
      return 0;
}

int pop() {	
   if(!isempty()) 
   {
      printf("\nTop Element is: %d",stack[top]);
      top = top - 1;
   }
   else
      printf("\nCould not retrieve data, Stack is empty.\n");
 return 0;
}

int push() {

   if(!isfull())
   {
		top = top + 1;
		printf("\nEnter Value: ");
		scanf("%d",&stack[top]);
   }
   else
      printf("\nCould not insert data, Stack is full.\n");
 return 0;
}

void main()
{
   clrscr();
   int choice;
   printf("Enter size of the stack: ");
   scanf("%d",&MAXSIZE);
   do
   {
	   start:
	   printf("\n1.Push\n2.Pop\n3.Exit");
	   printf("\nEnter Choice:");
	   scanf("%d",&choice);

	   switch(choice)
	   {
		   case 1:
					push();
					break;
		   case 2:
					pop();
					break;
		   case 3:
					exit(0);
		   default:
					printf("\nEnter a Valid Choice.");
					goto start;
		}

   }while(choice != 3);

   getch();
}