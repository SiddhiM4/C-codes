//neon number 9sq=18 sum of 18=9
#include<stdio.h>
int main()
{
    int num,n,sum=0,temp,sq,r;

    printf("Enter any number:");
    scanf("%d",&num);
    sq=num*num;
    temp=n;
    while(sq>0)
    {
        
        r=n%10;
        sum=sum+r;
    sq=sq/10;
    }
    if(temp==sum)
    {
        printf("%d temp = %d sum",temp,sum);
        printf("\nIt is a neon number");
    }
    else 
    {
        printf("%d temp != %d sum",temp,sum);
        printf("\nNot a neon number");
    }

}