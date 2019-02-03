// A Code For Linked List Insertion After A Node....
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int Info;
    struct Node *Link;
}*Ptr, *Save, *Start, *newN, *LOC;
int main()
{
    int Val = 0, Startok = 1, Item;
    printf("\t\tAshA && HimA.\a\nEnter The Value Please : ");
    scanf("%d", &Val);
    while( Val != 0 )
    {
        Ptr = (struct Node *)malloc(sizeof (struct Node));
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
            printf("Enter The Value Please : ");
            scanf("%d", &Val);
        }
        else
            printf("\nOverflow.!");
    }
    Ptr = Start;
    while( Ptr != NULL )
    {
        printf("  [%d]", Ptr -> Info);
        Ptr = Ptr -> Link;
    }
    printf("\nEnter The Given Node Please : ");
    scanf("%d", &Val);
    printf("Enter The Item Value Of Given Node Please : ");
    scanf("%d", &Item);
    newN = (struct Node *)malloc(sizeof(struct Node));
    if( newN != NULL )
    {
        newN -> Info = Item;
        Ptr = Start;
        LOC = NULL;
        while( Ptr != NULL && LOC == NULL )     // Searching........
        {
            if( Ptr -> Info == Val )
                LOC = Ptr;
            else
                Ptr = Ptr -> Link;
        }
        if( LOC != NULL )                       // Item Inserting After A Node.....
        {
            newN -> Link = LOC -> Link;
            LOC -> Link = newN;
        }
        else                                    // Item Inserting First Node.....
        {
            newN -> Info = Item;
            newN -> Link = Start;
            Start = newN;
        }
    }
    else
        printf("\nOverflow.!");
            printf("\n<===After Insertion.===>\n");
    Ptr = Start;
    while( Ptr != NULL )
    {
        printf("  [%d]", Ptr -> Info);
        Ptr = Ptr -> Link;
    }
return 0;
}
