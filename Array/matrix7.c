//sum of rows and columns
#include<stdio.h>
int main()
{
    int a[100][100],r,c,i,j,sumr[100]={0},sumc[100]={0};

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

    //sum of rows and columns
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sumr[i]=sumr[i]+a[i][j];
            sumc[j]=sumc[j]+a[i][j];
        }
    }
    //display
    printf("\nGiven matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nSum of rows:");
    for(i=0;i<r;i++)
    {
        printf("%d\t",sumr[i]);
    }
    printf("\nSum of columns:");
    for(j=0;j<c;j++)
    {
        printf("%d\t",sumc[j]);
    }
    

}
