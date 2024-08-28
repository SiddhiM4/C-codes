//bubble sort
#include<stdio.h>
int main()
{
    int i,j,a[100],n;

    printf("Enter N:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    printf("\nSorted elements\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j] > a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}