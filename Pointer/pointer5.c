//max and min
#include <stdio.h>
int main()
{
    int a,b;
    int *p,*q;

    p=&a;
    q=&b;

    printf("\nEnter two nos:");
    scanf("%d%d",&a,&b);

    if(*p>*q)
        printf("\n%d is greater",*p);
    else 
        printf("\n%d is greater",*q);
}