//parameter, return
#include<stdio.h>
int factorial(int);
int main()
{
    int a,n;
    printf("\nEnter any number:");
    scanf("%d",&n);

    a=factorial(n);
    printf("\nFactorial=%d",a);
}
int factorial(int n)
{
    int i,result;
    result=1;
    
    i=2;
    while(i<=n)
    {
        result=result*i;
        i++;
    }
    return result;
}