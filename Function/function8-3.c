//no parameter, return
#include<stdio.h>
int factorial()
{
    int n;
    printf("\nEnter number:");
    scanf("%d",&n);

    int fact=1;
    while(n!=1)
    {
        fact *= n;
        n--;
    }
    return fact;
}
int main()
{
    int a;
    a=factorial();
    printf("\nFactorial is : %d",a);
}