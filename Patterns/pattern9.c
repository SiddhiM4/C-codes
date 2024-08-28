/*

1 2
3 4 5 6
7 8 9 10 11 12
*/
#include<stdio.h>
int main()
{
    int i,j,rows,cnt=1;

    printf("enter rows:");
    scanf("%d",&rows);

    for(i=0;i<rows+3;i+=2)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",cnt);
            cnt++;
        }
        printf("\n");
    }
}