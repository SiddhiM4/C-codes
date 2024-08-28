#include<stdio.h>
int main()
{
    int a[100],*p;
    int n,i;

    p=&a[0];

    printf("Enter a N:");
    scanf("%d",&n);

    printf("\nEnter numbers:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("\nGiven data:\n");
    for(i=0;i<n;i++)
        printf("%d\n",p[i]);

        return 0;
}