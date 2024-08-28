//no parameter, no return
#include<stdio.h>
void factorial()
{
    int fact=1,n;
    printf("\nEnter number:");
    scanf("%d",&n);

    while(n!=1)
    {
        fact *= n;
        n--;
    }
    printf("\nFactorial=%d",fact);
}
int main()
{
    factorial();
}