//base and power and print result
#include<stdio.h>
int main()
{
    int base,power,result,i;
    
    printf("Enter base and power:");
    scanf("%d%d",&base,&power);

    result=1;
    i=1;
    while(i<=power)
    {
        result=result*base;
        i++;
    }
    printf("\nbase %d & power %d = %d",base,power,result);
}