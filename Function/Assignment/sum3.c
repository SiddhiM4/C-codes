//no parameter, return
#include<stdio.h>

int sum();

int main()
{
    int a;
    a= sum();
    printf("\nSum=%d",a);
}
int sum()
{
    int i,n,sum=0,a[100];

    printf("How many number:");
    scanf("%d",&n);

    printf("\nEnter data:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
         sum=sum+a[i];
    }
    return sum;

}