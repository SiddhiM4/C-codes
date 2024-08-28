#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],sub[100][100],i,j,r1,r2,c1,c2;

    printf("\nEnter rows for 1st matrix:");
    scanf("%d",&r1);
    printf("\nEnter columns for 1st matrix:");
    scanf("%d",&c1);\
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter rows for 2nd matrix:");
    scanf("%d",&r2);
    printf("\nEnter columns for 2nd matrix:");
    scanf("%d",&c2);
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(r1==r2 && c1==c2)
    {
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                sub[i][j]=a[i][j]-b[i][j];
            }
        }
        printf("\nSubtraction\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%d\t",sub[i][j]);
            }
            printf("\n");
        }
    }
    else
    printf("\nMatrix not possible");
}