#include<stdio.h>
int main()
{
    int n,result=1,i;

    printf("Enter N:");
    scanf("%d",&n);

    i=2;
    while(i<=n)
    {
        result=result*i;
        i++;
    }
    printf("\nFactorial=%d",result);
}