#include<stdio.h>
int main()
{
    int a[100][100],r,c,i,j;

    printf("\nEnter rows:");
    scanf("%d",&r);

    printf("\nEnter columns:");
    scanf("%d",&c);

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nGiven matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}