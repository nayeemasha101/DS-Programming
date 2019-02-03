// A Code For String Operation......
#include<stdio.h>
#include<string.h>
int main()
    {
        int i,j,Pos = 0, LenS = 0, LenP = 0;
        char Str1[500] = "", Item[500] = "", Sub1[500]="", Sub2[500]="", Insert[500]="";

        printf("Enter The String Please : ");
        gets(Str1);

        printf("\nEnter The Item String Please : ");
        gets(Item);

        printf("\nEnter The Position Please : ");
        scanf("%d", &Pos);

        LenS = strlen(Str1);
        LenP = strlen(Item);

        for( i=0; i < Pos; i++ )
            Sub1 [i] = Str1[i];
        j = 0;
        for( i= Pos - 1; i < LenS; i++ )
        {
            Sub2[j] = Str1[i];
            j++;
        }

        strcat(Insert,Sub1);
        strcat(Insert,Item);
        strcat(Insert,Sub2);
            printf("\n");
        puts(Insert);

    return 0;
    }
