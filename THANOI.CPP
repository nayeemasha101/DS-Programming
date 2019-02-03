#include <stdio.h>
#include <conio.h>

int Array[100]={0};

tower(int N, char Beg, char Aux, char End)
{

	if(N == 1)
	{
		printf("\n%c --> %c", Beg, End);
		return 0;
	}

   tower(N-1, Beg, End, Aux);
   printf("\n%c --> %c", Beg, End);
   tower(N-1, Aux, Beg, End);

   return 0;

}


void main()
{

   clrscr();
   int n,i;
   char beg,aux,end;

   printf("\nEnter Pages(Three Character only) : ");
   scanf("%c %c %c",&beg,&aux,&end);

   printf("\nEnter number of disk : ");
   scanf("%d",&n);
   
   printf("\nMoves of Tower of Hanoi are: \n");
   tower(n, beg, aux, end);
   getch();

}