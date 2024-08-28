#include<stdio.h>
int main()
{
    int a[100],n,i,*p;

    p=&a[0];

    printf("\nEnter N:");
    scanf("%d",&n);

    for(i=0;i<n;i++,p++)
    {
        scanf("%d",p);
    }
    p--;
     printf("Given data\n");
    for(i=0;i<n;i++,p--)
    {
        printf("%d\n",*p);
    }
}