//A Code For Largest Value...

#include<stdio.h>

int main()
{
    int Nth,i,data[100] = {0},Max = 0;

    printf("Enter The Nth Value Please : ");
    scanf("%d",&Nth);
    for( i=1; i<=Nth; i++ )
    {
        printf("Enter The Value Please %d: ",i);
        scanf("%d",&data[i]);
    }
    Max = data[i];
    for( i=1; i<= Nth; i++ )
    {
        if( Max < data[i] )
        Max = data[i];
    }
    printf("\nThe Largest Value is %d",Max);
return 0;
}
