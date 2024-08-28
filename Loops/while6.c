//factorial
#include<stdio.h>
int main()
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
        /*
        result result*n;
        n--;
        */
    }
    printf("\nFactorial of %d = %d",n,result);
}