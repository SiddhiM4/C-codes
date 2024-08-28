//bubble sort
#include<stdio.h>
int main()
{
    int i,j,n,a[100],temp;

    printf("Enter how many numbers:");
    scanf("%d",&n);

    printf("\nEnter n numbers:",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("\nUnsorted numbers are:\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);

    //bubble sorting
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j] > a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nSorted elements\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}