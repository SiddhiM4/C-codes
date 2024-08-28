//enter any number and check it is divisible by 3 and 5 both or not
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    if (n==0)
    {
        printf("\nNumber is zero, enter valid number");
    }
    else if(n%3==0 && n%5==0)
    {
        printf("\n%d is divisible by 3 and 5",n);
    }
    else if (n%3==0)
    {
        printf("\n%d is divible by 3",n);
    }
    else if(n%5==0)
    {
        printf("\n%d is divisible by 5",n);
    }
    else
    printf("\n%d is not divisible by 3 and 5",n);
    
}