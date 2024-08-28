//min and max
#include<stdio.h>
int main()
{
    int n,a[100],max,min,i;

    printf("How many numbers:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    max=a[0];
    for(i=1;i<n;i++)
        if(max < a[i])
        max = a[i];

    printf("\nMax:%d",max);

    min=a[0];
    for(i=1;i<n;i++)
        if(min > a[i])
        min = a[i];

    printf("\nMin:%d",min);
}