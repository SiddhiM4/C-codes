//revserse
#include<stdio.h>
int main()
{
    int i,n,a[100],key,temp;

    printf("Enter N:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    printf("\nReverse array\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}