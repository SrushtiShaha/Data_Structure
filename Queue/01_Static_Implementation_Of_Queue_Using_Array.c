#include<stdio.h>
#include<conio.h>

#define Max 5

int Queue[Max];
int Front = 0;
int Rear = 0;

int Is_Queue_Empty();
int Is_Queue_Full();
int Count_Queue_Elements();
void Enqueue( int );
void Dequeue();
void Display_Queue_Elements();

int main()
{
        Dequeue();

        getche();

        Display_Queue_Elements();

        getche();

        Enqueue( 49 );
        Enqueue( 23 );

        getche();

        printf("\n Total Element In Queue Are -> %d \n", Count_Queue_Elements() );

        getche();

        Display_Queue_Elements();

        getche();

        Dequeue();

        getche();

        printf("\n Total Element In Queue Are -> %d \n", Count_Queue_Elements() );

        getche();

        Enqueue( 15 );
        Enqueue( 93 );
        Enqueue( 73 );
        Enqueue( 81 );
        Enqueue( 30 );

        getche();

        printf("\n Total Element In Queue Are -> %d \n", Count_Queue_Elements() );

        getche();

        Display_Queue_Elements();

        getch();
        return 0;
}

int Is_Queue_Empty()
{
        if( Front == Rear )
        {
                return 1;
        }

        return 0;
}

int Is_Queue_Full()
{
        if( Rear == Max )
        {
                return 1;
        }

        return 0;
}

int Count_Queue_Elements()
{
        return Rear - Front;
}

void Enqueue( int iNo )
{
        if( Is_Queue_Full() )
        {
                printf("\n The Queue Is Full Can't Enqueue Any Element. \n");
        }
        else
        {
                Queue[Rear] = iNo;
                Rear++;

                printf("\n |%d| Element Enqueued Successfully!!! \n", iNo);
        }

        return;
}

void Dequeue()
{
        if( Is_Queue_Empty() )
        {
                printf("\n The Queue Is Empty Can't Dequeue Any Element. \n");
        }
        else
        {
                printf("\n |%d| Element Dequeued Successfully!!! \n", Queue[Front]);

                Queue[Front] = 0;
                Front++;
        }

        return;
}

void Display_Queue_Elements()
{
        if( Is_Queue_Empty() )
        {
               printf("\n The Queue Is Empty Can't Display Any Element. \n");
        }
        else
        {
                printf("\n Elements In Queue Are -> \n\t\t\t");

                for( int i = 0; i < Rear; i++ )
                {
                        printf("\t %3d ", Queue[i]);
                }
        }

        return;
}
