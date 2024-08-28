/*
1 2 3 4 5 6 
7 8 9 10 11 
12 13 14 15 
16 17 18 
19 20 
21 
*/
 
#include<stdio.h>
int main()
{
    int i,j,rows,cnt=1;

    printf("enter rows:");
    scanf("%d",&rows);

    for(i=rows;i>=0;i--)
    {
        for(j=i;j>=0;j--)
        {
            printf("%d ",cnt);
            cnt++;
        }
        printf("\n");
    }
}