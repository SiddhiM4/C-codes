//enter a number a print table of a number
#include<stdio.h>
int main()
{
    int n,a,b,i;

    printf("Enter number to display table:");
    scanf("%d",&n);

    i=1;
    while(i<=10)
    {
        printf("\n%d\t *\t%d\t=\t%d ",n,i,n*i);
        i++;
    }
}