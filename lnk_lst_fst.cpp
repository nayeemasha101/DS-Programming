//A Code For Linked List Inserting At First Position.......
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int Info;
    struct Node *Link;
}*Ptr,*Start, *Save, *newN;
int main()
{
    int Val = 0, Startok = 1;
        printf("\t\tAshA\n");
    printf("Enter The Value Please: ");
    scanf("%d", &Val);
    while( Val != 0 )
    {
        Ptr = (struct Node *) malloc(sizeof(struct Node));
        if( Ptr != NULL )
        {
            if( Startok == 1 )
            {
                Start = Ptr;
                Ptr -> Info = Val;
                Ptr -> Link = NULL;
                Save = Ptr;
                Startok = 0;
            }
            else
            {
                Ptr -> Info = Val;
                Save -> Link = Ptr;
                Ptr -> Link = NULL;
                Save = Ptr;
            }
            printf("Enter The Value Please: ");
            scanf("%d", &Val);
        }
        else
            printf("\nOverflow.\n");
    }
    Ptr = Start;
    while( Ptr != NULL )
    {
        printf(" [%d] [%d]", Ptr -> Info, Ptr -> Link);
        Ptr = Ptr -> Link;
    }
    printf("\nEnter The Item Value Please: ");
    scanf("%d", &Val);
    newN = (struct Node *) malloc(sizeof(struct Node));
    if( newN != NULL )
    {
        newN -> Info = Val;
        newN -> Link = Start;
        Start = newN;
    }
    else
        printf("\nOverflow.");

      printf("\nAfter Inserting A Value At First Position.\n");
    Ptr = Start;
    while( Ptr != NULL )
    {
         printf(" [%d] [%d]", Ptr -> Info, Ptr -> Link);
        Ptr = Ptr -> Link;
    }
return 0;
}
