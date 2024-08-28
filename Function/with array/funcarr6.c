#include<stdio.h>
#include"array_function.h"

int main()
{
    int n,a[100];
    printf("\nHow many numbers:");
    scanf("%d",&n);

    accept(a,n);

    printf("\nGiven data\n");
    display(a,n);
    
}