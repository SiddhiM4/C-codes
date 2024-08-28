#include<stdio.h>
int main()
{
    int i,n,x=1;

    printf("\nEnter N:");
    scanf("%d",&n);

    i=2;
    while(i<=n/2)
    {
        if(n%2==0)
        {
            x=0;
            break;
        }
        i++;
    }
    if(x==1)
    {
        printf("\nPrime number");
    }
    else printf("\nNot prime number");
}