//enter any 3 nos and print greater number
#include<stdio.h>
int main()
{
    int a,b,c,z;
    printf("Enter any three numbers:");
    scanf("%d%d%d",&a,&b,&c);

    z=(a>b)?(b>a?b:a):(c>a?c:b);
    printf("\nLargest number is %d",z);
    return 0;
}