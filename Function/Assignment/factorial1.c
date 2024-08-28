//no parameter, no return
#include<stdio.h>
void factorial();
int main()
{
    factorial();
}
void factorial()
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
    printf("\nFactorial of %d = %d",n,result);

}