/*
0 2 3 4 5
1 0 3 4 5
1 2 0 4 5
1 2 3 0 5
*/
#include<stdio.h>
int main()
{
    int i,j,n;

    printf("enter rows:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)
            {
                printf("0 ");
            }
            else
            printf("%d ",j);
        }
        printf("\n");
    }
}