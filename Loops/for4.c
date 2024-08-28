//print even nos and print addition of nos
#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=2;i<=20;i++)
    {
        if(i%2==0)
        {
            printf("\n%d",i);
            sum=sum+i;
        }
    }
    printf("\nAddition of first 20 even nos=%d",sum);
}