#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node
{
        int Data;
        struct Node *Next;
};

void Insert_Last( struct Node**, int );
void Delete_Last( struct Node** );
void Display_LL( struct Node* );

int main()
{
        int Num = 21;
        struct Node *Head = NULL;

        Display_LL( Head );

        getch();

        Insert_Last( &Head, Num );

        getch();

        Insert_Last( &Head, 87 );

        getch();

        Insert_Last( &Head, 35 );

        getch();

        Delete_Last( &Head );

        getch();

        Insert_Last( &Head, 55);

        getch();

        Delete_Last( &Head );

        Insert_Last( &Head, 75 );

        getch();

        Insert_Last( &Head, 15 );

        getch();

        Delete_Last( &Head );

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

void Delete_Last( struct Node **First )
{
        if( NULL == *First )
        {
                printf("\n Linked List Is Empty Can't Delete Any Element. \n");
        }
        else
        {
                struct Node *Temp = *First;

                if( Temp -> Next != NULL )
                {
                        while( Temp -> Next -> Next != NULL )
                        {
                                Temp = Temp -> Next;
                        }

                        printf("\n Deleted Last Element In Linked List Is = %d. \n", Temp -> Data);

                        free( Temp -> Next );

                        Temp -> Next = NULL;
                }
                else
                {
                        printf("\n Deleted Last Element In Linked List Is = %d. \n", Temp -> Data);

                        free( Temp );

                        *First = NULL;
                }
        }

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
