#include<stdio.h>
void fun(int n[100])
{
    printf("\nValue A: %d",n[0]);
    printf("\nAddress A: %d",&n[0]);
}

int main()
{
    int a[100];

    printf("\nEnter a number:");
    scanf("%d",&a);

    fun(a);

    printf("\nValue N: %d",a[0]);
    printf("\nAddress N: %d",&a[0]);
}