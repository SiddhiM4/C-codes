//parameter, return
#include<stdio.h>

int sum(int);

int main()
{
    int n,a;
    printf("How many number:");
    scanf("%d",&n);
    a= sum(n);
    printf("\nSum=%d",a);
}
int sum(int n)
{
    int i,sum=0,a[100];

    printf("\nEnter data:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
         sum=sum+a[i];
    }
    return sum;

}