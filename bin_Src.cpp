//A Code For Bubble-Short...

#include<stdio.h>

int main()
{
    int Nth,i,j,data[100] = {0},LOC = 0,temp,Item,Beg,End,Mid;

    printf("Enter The Nth Value Please : ");
    scanf("%d",&Nth);
    printf("\n");
    for( i=1; i<=Nth; i++ )
    {
        printf("Enter The %dth Value Please : ",i);
        scanf("%d",&data[i]);
    }
    for( i=1;i<=(Nth-1);i++ )
    {
        for( j=1; j<= Nth-i; j++ )
        {
            if( data[j] > data[j+1] )
            {
                 temp = data[j];
                 data[j] = data[j+1];
                 data[j+1] = temp;
            }
        }
    }
    printf("\nAfter Shorting -- \n");
    for( i=1; i<= Nth; i++ )
    {
        printf(" %d",data[i]);
    }
    printf("\nEnter The Item Value Please : ");
    scanf("%d",&Item);

    Beg = 1;
    End = Nth;
    Mid = (int) (Beg + End) / 2;
    while( Beg <= End && data[Mid] != Item )
    {
        if(Item < data[Mid])
            End = Mid -1;
        else
            Beg = Mid + 1;
        Mid = (int) (Beg + End) / 2;
    }
    if( data[Mid] == Item )
    {
        LOC = Mid;
        printf("\nThe Location Of Given Value Is : %d",LOC);
    }
    else
        printf("\nItem dos't Found.");
return 0;
}
