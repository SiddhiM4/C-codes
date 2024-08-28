//perfect number
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter any number:");
    scanf("%d",&n);

    printf("\nFactors of %d are\n",n);
    i=1;
    while(i<=n/2)
    {
        if(n%i==0)
        {
            printf("\n%d",i);
            sum+=i;
        }
        i++;
    }
    
    printf("\nSum=%d",sum);
    if(sum==n)
    {
        printf("\nIt is a perfect number");
    }
    else 
    {
        printf("\nNot a perfect number");
    }
}