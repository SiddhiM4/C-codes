#include<stdio.h>
int main()
{
    int a,b;
    int *p,*q;

    p=&a;
    q=&b;

    printf("Enter a 2 numbers:");
    scanf("%d%d",&a,&b);

    printf("\nAddition=%d",(*p+*q));
}