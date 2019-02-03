// A Code For String Operation Finding Length.......
#include<stdio.h>
#include<string.h>
int main()
{
    int i, LenS = 0;
    char Str1[500]="";

    printf("\t\t\aAshA && HimA..!\nEnter The String Please : ");
    gets(Str1);

    i = 0;
    while( Str1[i] != NULL )
    {
        LenS++;
        i++;
    }
    printf("\nThe Length Of The String Is : %d", LenS);

return 0;
}
