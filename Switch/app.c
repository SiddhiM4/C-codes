#include<stdio.h>
int main()
{
    int ch;
    char z;
    printf("\n------Select Authors to display their Books-------");
    printf("\n1.Sudha Murthy\n2.APJ Abdul Kalam\n3.Chetan Bhagat");
    printf("\nEnter your choice:");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
        printf("\na.Wise and Otherwise\nb.Mahashweta\nc.Dollar Bahu\nEnter your choice:");
        scanf("%s",&z);

        switch(z)
        {
            case 'a':
            printf("\n......About Wise and Otherwise Book-------------");
            break;

            case 'b':
            printf("\n......About Mahashweta Book-------------");
            break;

            case 'c':
            printf("\n......About Dollar Bahu Book-------------");
            break;

        }
        break;
        case 2:
        printf("\na.Wings of Fire\nb.Ignited Minds\nc.Learning How to Fly\nEnter your choice:");
        scanf("%s",&z);

        switch(z)
        {
            case 'a':
            printf("\n......About Wings of Fire Book-------------");
            break; 

            case 'b':
            printf("\n......About Ignited Minds Book-------------");
            break;

            case 'c':
            printf("\n......About Learning How to Fly Book-------------");
            break;
        }
        break;

        case 3:
        printf("\na.Revolution\nb.Two States\nc.What Young India Wants\nEnter your choice:");
        scanf("%s",&z);

        switch(z)
        {
            case 'a':
            printf("\n......About Revolution Book-------------");
            break;

            case 'b':
            printf("\n......About Two States Book-------------");
            break;

            case 'c':
            printf("\n......About What Young India Wants-------------");
            break;
        }
        break;
    }
}