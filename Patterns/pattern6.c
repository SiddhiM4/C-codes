/*
A
A B
A B C
A B C D
A B C D E
A B C D E F
*/
#include<stdio.h>
int main()
{
    int i,j,rows;
    char ch;

    printf("Enter rows:");
    scanf("%d",&rows);

    for(i=0;i<=rows;i++)
    {
        ch='A';
        for(j=0;j<=i;j++)
        {
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
   }
}