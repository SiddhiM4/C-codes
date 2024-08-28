#include<stdio.h>
void fun(int n)
{
    printf("\nValue N: %d",n);
    printf("\nAddress N: %d",&n);
}

int main()
{
    int a;

    printf("\nEnter a number:");
    scanf("%d",&a);

    fun(a);

    printf("\nValue N: %d",a);
    printf("\nAddress N: %d",&a);
}