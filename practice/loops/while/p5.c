#include<stdio.h>
int main()
{
    int i,n;
    printf("\nEnter number to print factors:");
    scanf("%d",&n);

    printf("\nFactors of %d are\n",n);
    i=2;
    while(i<=n/2)
    {
        if(n%i==0)
        {
            printf("\n%d",i);
        }
        i++;
    }
}