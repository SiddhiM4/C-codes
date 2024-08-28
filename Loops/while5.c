//factors of no
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter any number:");
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