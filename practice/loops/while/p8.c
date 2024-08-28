//perfect number
#include<stdio.h>
int main()
{
    int n,i,sum=0;

    printf("Enter N:");
    scanf("%d",&n);

    i=1;
    while(i<=n/2)
    {
        if(n%i==0)
        {
            printf("\n%d",i);
            sum=sum+i;
        }
        i++;
    }
    printf("\nAddition=%d",sum);
    if(sum==n)
    {
        printf("\nPerfect number");
    }
    else printf("\nNot perfect number");
}