//parameter, no return
#include<stdio.h>
void factorial(int);
int main()
{
    int n;
    factorial(n);
}
void factorial(int n)
{
    int i,result;
    result=1;
    printf("\nEnter any number:");
    scanf("%d",&n);

    i=2;
    while(i<=n)
    {
        result=result*i;
        i++;
    }
    printf("\nFactorial of %d = %d",n,result);

}