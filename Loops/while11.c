//reverse number
#include<stdio.h>
int main()
{
    int n,r,reverse=0;

    printf("Enter any number:");
    scanf("%d",&n);

    while(n!=0)//123!=0
    {
        r=n%10;//   r=123%10=3  |   r=12%10=2   |   r=1%10=1
        reverse=reverse*10+r;//reverse=3    |   reverse=3*10+2=32   |   reverse=32*10+1=321
        n=n/10;//   n=123/10=12    |   n=12/10=1    |n=1/10=0
    }
    printf("\nReverse number:%d",reverse);
}