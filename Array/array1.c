#include<stdio.h>

int main()
{
    int a[100];
    int i,n;

    printf("How many numbers you want to enter:");
    scanf("%d",&n);

    printf("\nEnter %d numbers:",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("\nGiven data is:");
    for(i=0;i<n;i++)
        printf("\n%d",a[i]);
}