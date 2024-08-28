//parameter, no return
#include<stdio.h>
void factor(int);

int main()
{
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    factor(n);
}
void factor(int n)
{
    int i;
    
    printf("\nFactors of %d are\n",n);
    i=2;
    while(i<=n/2)
    {
        if(n%i==0)
        {
            printf("\n%d",i);
        }
        i++;
    }

}