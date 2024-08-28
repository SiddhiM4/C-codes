//factorial
#include<stdio.h>
int main()
{
    int i,no,result;
    result=1;

    printf("\nEnter number to print factorial:");
    scanf("%d",&no);

    printf("\nFactorial of %d :",no);
    for(i=2;i<=no;i++)
    {
        result=result*i;
        
    }
    printf("%d",result);
}