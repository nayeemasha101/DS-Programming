//A Code For Bubble-Short...

#include<stdio.h>

int main()
{
    int Nth,i,data[100] = {0},LOC = 0,Item;

    printf("Enter The Nth Value Please : ");
    scanf("%d",&Nth);
    printf("\n");
    for( i=1; i<=Nth; i++ )
    {
        printf("Enter Value Please %d: ",i);
        scanf("%d",&data[i]);
    }
    printf("\nEnter The Item Value Please : ");
    scanf("%d",&Item);
    i = 1;
    while( i<= Nth && LOC == 0 )
    {
        if( Item == data[i] )
            LOC = i;
        else
            i++;
    }
    if( LOC != 0 )
        printf("\nThe Location Of Given Value Is : %d",LOC);
    else
        printf("\nItem dos't Found.");
return 0;
}
