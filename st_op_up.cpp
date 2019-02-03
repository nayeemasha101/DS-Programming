// A Code For Struck Operation Update........
#include<stdio.h>
#include<string.h>
int main()
    {
        int i,j,Pos = 0, LenS = 0, LenP1 = 0, LenP2 = 0,LocP1 = 0;
        char Str1[500]="", P1[500]="",P2[500]="",Sub1[500]="",Sub2[500]="";

        printf("\t\t\a<<==AshA && HimA==>>\nEnter The String Please : ");
        gets(Str1);

        printf("Enter The Text Please : ");
        gets(P1);

        printf("Enter The Pattern Please : ");
        gets(P2);

        LenS = strlen(Str1);
        LenP1 = strlen(P1);

        for( i=0; i < (LenS - LenP1 + 1) && LocP1 == 0 ; i++ )
        {
            j = 0;
            while( P1[j] != NULL )
            {
                if( P1[j] == Str1[i+j] )
                {
                    j++;
                }
                else
                    break;
            }
            if( j == LenP1 )
            {
                LocP1 = i;
                printf("\nPattern Found..!!\n");
                for( i=0; i < LocP1; i++ )
                    Sub1[i] = Str1[i];
                j = 0;
                for( i=(LocP1 + LenP1); i < LenS; i++ )
                {
                    Sub2[j] = Str1[i];
                    j++;
                }
            }
        }
        if( LocP1 != 0 )
        {
            strcat(Sub1,P2);
            strcat(Sub1,Sub2);
            puts(Sub1);
        }
        else
            printf("\nPattern Not Found..!!\n");
        return 0;
    }
