//parameter, return
#include<stdio.h>
int factorial(int n)
{
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
    int n,a;
    printf("\nEnter number:");
    scanf("%d",&n);
 
    a=factorial(n);
    printf("\nFactorial is : %d",a);
}