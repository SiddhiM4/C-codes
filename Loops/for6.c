//factors of no
#include<stdio.h>
int main()
{
    int i,no;
    printf("Enter number to print factors of a number:");
    scanf("%d",&no);

    printf("\nFactors of %d are:",no);
    for(i=2;i<=no/2;i++)
    {
        if(no%i==0)
        {
            printf("\n%d",i);
        }
    }
}