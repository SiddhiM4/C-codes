//reverse
#include<stdio.h>
int main()
{
    int i,n,a[100],temp;

    printf("How many numbers:");
    scanf("%d",&n);

    printf("\nEnter %d nos\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Array\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    //reverse
    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }

    printf("\nReverse array\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    
    
}