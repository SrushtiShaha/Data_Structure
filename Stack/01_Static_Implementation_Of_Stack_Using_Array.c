#include<stdio.h>
#include<conio.h>

#define Size 5

int Is_Stack_Full();
int Is_Stack_Empty();
int Count_Stack_Elements();
void Push( int );
void Pop();
void Display_Stack();
int Search_Stack_Element( int );

int Stack[Size] = {};
int Top = 0;

int main()
{
        int Ret = 0;

        Push(21);
        Push(55);
        Push(12);

        getche();

        Display_Stack();

        Pop();

        Display_Stack();

        Pop();
        Pop();
        Pop();
        Pop();

        getche();

        Ret = Search_Stack_Element(56);

        if( Ret < 0 )
        {
                printf("\n Element Not Found. \n");
                printf("\n\n------------------------------------------------------\n");
        }
        else
        {
                printf("\n Element Found At Location -> %d.", Count_Stack_Elements());
                printf("\n\n------------------------------------------------------\n");
        }

        printf("\n Number Of Elements In Stack Are -> %d", Count_Stack_Elements());
        printf("\n\n------------------------------------------------------\n");

        Display_Stack();

        Push(75);
        Push(56);
        Push(121);
        Push(5485);

        Display_Stack();

        Ret = Search_Stack_Element(56);

        if( Ret < 0 )
        {
                printf("\n The Element Not Found.");
                printf("\n\n------------------------------------------------------\n");
        }
        else
        {
                printf("\n\n Element Found At Location -> %d. \n", Ret);
                printf("\n\n------------------------------------------------------\n");
        }

        printf("\n Number Of Elements In Stack Are -> %d. \n", Count_Stack_Elements());
        printf("\n\n------------------------------------------------------\n");

        getch();
        return 0;
}

int Is_Stack_Full()
{
        if( Top == Size )
        {
                return 1;
        }

        return 0;
}

int Is_Stack_Empty()
{
        if( Top == 0 )
        {
                return 1;
        }

        return 0;
}

int Count_Stack_Elements()
{
        return Top;
}

void Push( int Ele )
{
        if( Is_Stack_Full() )
        {
                printf("\n\n The Stack Is Already Full Can't Add The Element.\n");
                printf("\n\n------------------------------------------------------\n");
        }
        else
        {
                Stack[Top] = Ele;
                Top++;
        }

        return;
}

void Pop()
{
        if( Is_Stack_Empty() )
        {
                printf("\n\n The Stack Is Empty Can't Delete The Element.\n");
                printf("\n\n------------------------------------------------------\n");
        }
        else
        {
                printf("\n\n Deleted Item Is = %d \n", Stack[Top-1]);
                printf("\n\n------------------------------------------------------\n");
                Stack[Top - 1] = 0;
                Top--;
        }

        return;
}

void Display_Stack()
{
        int i = 0;

        if( Is_Stack_Empty() )
        {
                printf("\n\n The Stack Is Empty Can't Display Any Element.\n");
                printf("\n\n------------------------------------------------------\n");
        }
        else
        {
                printf("\n\n Current Stack Elements Are -> \n");


                for( i = Top - 1; i >= 0; i-- )
                {
                        printf("\n\t |%d| ",Stack[i]);
                }

                printf("\n\n------------------------------------------------------\n");
        }

        return;
}

int Search_Stack_Element( int Ele )
{
        int Cnt = 0;

        if( Is_Stack_Empty() )
        {
                printf("\n Stack Is Empty Can't Search Element.\n");
                printf("\n------------------------------------------------------\n");
        }
        else
        {
                while( Cnt < Top )
                {
                        if( Stack[Cnt] == Ele )
                        {
                                return Cnt + 1;
                        }

                        Cnt++;
                }
        }

        return -1;
}
