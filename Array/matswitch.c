#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],r1,r2,c1,c2,i,j,k,ch,add[100][100],sub[100][100],mul[100][100];
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
    do
    {
        printf("\n1.Matrix Addition\n2.Matrix Sutraction\n3.Matrix Multiplication\nEnter your choice-");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1://addition
        if(r1==r2 && c1==c2)
        {
            for(i=0;i<r1;i++)
            {
                for(j=0;j<c1;j++)
                {
                    add[i][j]=a[i][j]+b[i][j];
                }
            }
            printf("\nAddition\n");
            for(i=0;i<r1;i++)
            {
                for(j=0;j<c1;j++)
                {
                    printf("%d\t",add[i][j]);
                }
                printf("\n");
            }
        }
        else
        printf("\nMatrix not possible");
                break;

        case 2://subraction
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
        break;

        case 3://multiplication

        for(i=0;i<r1;i++)
        {
            for(k=0;k<c2;k++)
            {
                for(j=0;j<r2;j++)
                {
                    mul[i][k]=a[i][k] + (a[i][j] * b[j][k]);
                }
            }
        }
        printf("\nMatrix Multiplication\n");
        for(i=0;i<r1;i++)
        {
            for(k=0;k<c2;k++)
            {
                printf("%d\t",mul[i][k]);
            }
            printf("\n");
        }
        break;
    }
        
    } 
    while (ch!=0);
}