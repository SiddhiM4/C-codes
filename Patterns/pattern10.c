/*
0
1 0
1 2 0
1 2 3 0
1 2 3 4 0
*/
#include<stdio.h>
#include<stdio.h>
int main()
{
    int i,j,n;

    printf("enter rows:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("0\n");
    }
}