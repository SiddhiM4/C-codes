//acii value
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character:");
    scanf("%c",&ch);
    printf("\n %c ACII Value-%d",ch,ch);

    if((ch>=65) && (ch<=90))
    {
        printf("\n It is capital character");
    }
    else if((ch>=97) && (ch<=122))
    {
        printf("\n It is small charactier");
    }
    else if((ch>48) && (ch<=57))
    {
        printf("\nIt is a number");
    }
    else printf("\n it is other character");
    return 0;
}