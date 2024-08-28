//parameter, no return
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
    int num;

    printf("\nEnter number:");
    scanf("%d",&num);

    printf("\nFactorial is : %d",factorial(num));
}