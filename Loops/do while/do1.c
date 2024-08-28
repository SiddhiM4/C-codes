#include<stdio.h>
int main()
{
    int i,n;

    printf("Enter N:");
    scanf("%d",&n);
    
    i=1;
    do
    {
        printf("\nHello World!");
        i++;
    }
    while(i<=n);
}