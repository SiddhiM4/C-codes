//enter 2 numbers and print greater number also check both nos are same or not
//check both numbers are zero or not
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter any two numbers:");
    scanf("%d%d",&a,&b);
    
    if(a>b)
    {
        printf("\n%d is greater",a);//a is greater
    }
    else
    {
        printf("\n%d is greater",b);//b is greater
    }

    if(a!=b)
    {
        printf("\n Numbers are not same");//not same
    }else 
    {
        printf("\n Numbers are same");//same nos
    }

    if(a=b=0)
    {
        printf("\nBoth nos are zero.");//both are zero
    }
    else 
    {
        printf("\nBoth number are not zero.");//not zero
    }
    return 0;
}