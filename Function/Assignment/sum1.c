//no parameter, not return
#include<stdio.h>

void sum();

int main()
{
    sum();
}
void sum()
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
    printf("\nSum=%d",sum);

}