#include<stdio.h>
int main()
{
    int i,j,n;
    char ch1;

    printf("Enter rows:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        ch1='A';
        for(j=1;j<=i;j++)
        {
            printf("%c ",ch1);
            ch1++;
        }
    }
}