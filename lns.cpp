// A Code For Find largest Element...
#include<stdio.h>
int main()
{
    int Nth,i,Item,data[100]={0},LOC=0;
        printf("\t\tAshA && HimA.\n");
    printf("Enter The Nth Element Please: ");
    scanf("%d", &Nth);
        printf("\n");
    for( i=1; i <= Nth; i++ )
    {
        printf("Please Enter The %dth Value: ",i);
        scanf("%d", &data[i]);
    }
    printf("\nEnter The Item Value Please: ");
    scanf("%d", &Item);
    i = 1;
    while( i <= Nth && LOC == 0 )
    {
        if( Item == data[i] )
            LOC = i;
        else
            i++;
    }
    if( LOC != NULL )
        printf("\nThe Given Number %dth Location Is : %d", Nth ,LOC);
    else
        printf("\nItem Dose Not Found.");

return 0;
}
