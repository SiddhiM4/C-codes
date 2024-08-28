//no parameter, return
#include<stdio.h>
int factorial();
int main()
{
    int a;
    a=factorial();
    printf("\nFactorial=%d",a);
}
int factorial()
{
    int n,i,result;
    result=1;
    printf("\nEnter any number:");
    scanf("%d",&n);

    i=2;
    while(i<=n)
    {
        result=result*i;
        i++;
    }
    return result;
}