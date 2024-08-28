//parameter, return
#include<stdio.h>
int factor(int);

int main()
{
    int a,n;
     printf("Enter any number:");
    scanf("%d",&n);

    a=factor(n);
     printf("\n%d",a);
}
int factor(int n)
{
    int i;
   
    printf("\nFactors of %d are\n",n);
    i=2;
    while(i<=n/2)
    {
        if(n%i==0)
        {
           printf("%d\t",i);
        }
        i++;
    }
    return i;

}