#include<stdio.h>
int main()
{
    int i,n;

    printf("\nEnter N:");
    scanf("%d",&n);

    i=n;
    while(i>=1)
    {
        printf("\n%d",i);
        i--;
    }
}