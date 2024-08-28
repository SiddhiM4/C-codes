/*
Aa
Aa Bb
Aa Bb Cc
Aa Bb Cc Dd
Aa Bb Cc Dd Ee
*/
#include<stdio.h>
int main()
{
    int i,j,rows;
    char ch,ch2;

    printf("Enter rows:");
    scanf("%d",&rows);

    for(i=0;i<=rows;i++)
    {
        ch='A';
        ch2='a';
        for(j=0;j<=i;j++)
        {
            printf("%c%c ",ch,ch2);
            ch++;
            ch2++;
        }
        printf("\n");
   }
}