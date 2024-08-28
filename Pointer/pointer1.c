#include<stdio.h>
int main()
{
    int a;
    int *p=&a;

    printf("Enter number:");
    scanf("%d",&a);

    printf("\nNumber=%d",*p);
    printf("\nAddress of a=%d",&a);
    printf("\nAddress of p=%d",p);
}