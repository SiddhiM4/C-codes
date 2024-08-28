//prime number
#include<stdio.h>
int main()
{
    int n,i,x=1;
    printf("Enter any number:");
    scanf("%d",&n);
    i=2;
    while(i<=n/2)
    {
        if(n%2==0)
        {
            x=0;
            break;
        }
        i++;
    }//end of while

    if(x==1)
    {
        printf("\nIs is a prime number!");
    }
    else 
    {
        printf("\nIt is not a prime number!");
    }
}