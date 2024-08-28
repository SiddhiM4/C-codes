//parameter, not return
#include<stdio.h>

void sum(int);

int main()
{
    int i,n;

    printf("How many number:");
    scanf("%d",&n);
    sum(n);
}
void sum(int n)
{
    int i,sum=0,a[100];
    printf("\nEnter data:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
         sum=sum+a[i];
    }
    printf("\nSum=%d",sum);

}