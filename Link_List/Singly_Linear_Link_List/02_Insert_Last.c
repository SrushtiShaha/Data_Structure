#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node
{
        int Data;
        struct Node *Next;
};

void Insert_Last( struct Node**, int );
void Display_LL( struct Node* );

int main()
{
        int Num = 21;
        struct Node *Head = NULL;

        Display_LL( Head );

        getch();

        Insert_Last( &Head, Num );

        getch();

        Insert_Last( &Head, 55);

        getch();

        Insert_Last( &Head, 75 );

        getch();

        Insert_Last( &Head, 15 );

        getch();

        Display_LL( Head );

        getch();
        return 0;
}

void Insert_Last( struct Node **Last, int No )
{
        struct Node *NewN = NULL;

        NewN = ( struct Node* ) malloc ( sizeof ( struct Node  ) );

        NewN -> Data = No;
        NewN -> Next = NULL;

        if( NULL == *Last )
        {
                printf("\n Inside If Block Of Insert Last. \n");

                printf("\n-------------------------------------------\n\n");
        }
        else
        {
                struct Node *Temp = *Last;

                while( Temp -> Next != NULL )
                {
                        Temp = Temp -> Next;
                }

                Temp -> Next = NewN;
        }

        printf("\n |%d| Element Inserted Successfully. \n",No);

        return;
}

void Display_LL( struct Node *Last )
{
        if( NULL == Last )
        {
                printf("\n The Linked List Is Empty Can't Display Any Element. \n");

                printf("\n-------------------------------------------\n\n");
        }
        else
        {
                printf("\n Elements In Linked List Are -> \n\n");

                while( Last != NULL )
                {
                        printf("\t %d ", Last -> Data);

                        Last = Last -> Next;
                }

                printf("\t NULL \n");

                printf("\n-------------------------------------------\n\n");
        }

        return;
}
