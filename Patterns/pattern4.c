/*
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
*/
#include<stdio.h>
int main()
{
    int i,j,rows,cnt=1;

    printf("enter rows:");
    scanf("%d",&rows);

    for(i=0;i<rows;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d ",cnt);
            cnt++;
        }
        printf("\n");
    }
}