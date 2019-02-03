//A Code For Bubble Short...

#include<stdio.h>

int main()
{
    int Nth,i,data[100] = {0},j,temp;

    printf("Enter The Nth Value Please : ");
    scanf("%d",&Nth);
    for( i=1; i<=Nth; i++ )
    {
        printf("Enter The Value Please %d: ",i);
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
return 0;
}
