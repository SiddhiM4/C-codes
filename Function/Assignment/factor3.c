//no parameter, return
#include<stdio.h>
int factor();

int main()
{
    int a;
    a=factor();
     printf("\n%d",a);
     return 0;
}
int factor()
{
    int n,i,count=0;
    printf("Enter any number:");
    scanf("%d",&n);

    printf("\nFactors of %d are\n",n);
    i=2;
    while(i<=n/2)
    {
        if(n%i==0)
        {
           printf("%d ", i);
            count++;
        }
        i++;
    }
    return count;

}