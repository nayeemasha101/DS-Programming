// A Code For Bubble Short........

#include<stdio.h>

int main()
{
    int Nth, Data[500]={0}, Temp, i, j, Item, Beg, End, Mid, LOC = 0, Ok = 0;

    printf("Enter The Nth Value Please: ");
        scanf("%d", &Nth);
    for( i = 1; i <= Nth; i++ )
    {
        printf("PLease Enter The [%d] th Value: ",i);
            scanf("%d", &Data[i]);
    }

    printf("\nInput Data Is Given Below..!!\n");

    for( i = 1; i <= Nth; i++ )
        printf("    %d", Data[i]);

    printf("\nEnter The Item Value Please: ");
        scanf("%d", &Item);

        Beg = 1;
    End = Nth;
    Mid = (int) (Beg + End) / 2;

    while( Beg <= End && Data[Mid] != Item )
    {
        if( Item <= Data[Mid] )
            End = Mid - 1;
        else
            Beg = Mid + 1;
            Mid = (int) (Beg + End) / 2;
    }

    if( Data[Mid] == Item )
    {
        LOC = Mid;
        Ok = 1;
        printf("\nThe Location Of Item Value Is : %d", LOC);
    }
    else
        printf("\nItem Dos't Found..!!");

    if( Ok == 1 )
    {
        for( i = 1; i <=(Nth-1); i++ )
        {
            for( j = 1; j <=(Nth-i); j++ )
            {
                if( Data[j] > Data[j+1] )
                {
                    Temp = Data[j];
                    Data[j] = Data[j+1];
                    Data[j+1] = Temp;
                }
            }
        }
        printf("\n<<== After Shorting ==>>\n");
        for( i = 1; i <= Nth; i++ )
            printf("    %d", Data[i]);
    }

return 0;
}
