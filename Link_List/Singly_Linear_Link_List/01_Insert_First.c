#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node
{
        int Data;
        struct Node *Next;
};

void Insert_First( struct Node**, int );
void Display_LL( struct Node* );

int main()
{
        int Num = 21;
        struct Node *Head = NULL;

        Display_LL( Head );

        getch();

        Insert_First( &Head, Num );

        getch();

        Insert_First( &Head, 55);

        getch();

        Insert_First( &Head, 75 );

        getch();

        Insert_First( &Head, 15 );

        getch();

        Display_LL( Head );

        getch();
        return 0;
}

void Insert_First( struct Node **First, int No )
{
        struct Node *NewN = NULL;

        NewN = ( struct Node* ) malloc ( sizeof( struct Node ) );

        NewN -> Data = No;
        NewN -> Next = NULL;

        if( NULL == *First )
        {
                *First = NewN;

                printf("\n Inside If Block Of Insert First. \n");

                printf("\n-------------------------------------------\n\n");
        }
        else
        {
                NewN -> Next = *First;
                *First = NewN;

                printf("\n Inside Else Block Of Insert First. \n");

                printf("\n-------------------------------------------\n\n");
        }

        printf("\n |%d| Element Inserted Successfully. \n",No);

        printf("\n-------------------------------------------\n\n");

        return;
}

void Display_LL( struct Node *First )
{
        if( NULL == First )
        {
                printf("\n The Linked List Is Empty Can't Display Any Element. \n");

                printf("\n-------------------------------------------\n\n");
        }
        else
        {
                printf("\n Elements In Linked List Are -> \n\n");

                while( First != NULL )
                {
                        printf("\t %d ", First -> Data);

                        First = First -> Next;
                }

                printf("\t NULL \n");

                printf("\n-------------------------------------------\n\n");
        }

        return;
}
