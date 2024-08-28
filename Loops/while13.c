//armstrong number
#include <stdio.h>
int main()
{
    int n,result=0,sum=0,temp,i,cnt=0,r;

    printf("Enter any number:");
    scanf("%d",&n);

    temp=n;
    while(n!=0)
    {
        n=n/10;
        cnt++;
    }
    n=temp;
    while(n!=0)
    {
        r=n%10;
        i=1;
        result=1;
        while(i<=cnt)
        {
            result=result*r;
            i++;
        }
        sum=sum+result;
        n=n/10;
    }
    if(sum==temp)
    {
        printf("\n%d = %d",temp,sum);
        printf("\nIt is armstrong number");
    }
    else {
        printf("\n%d != %d",temp,sum);
        printf("\nNot a armstrong number");
    }
}