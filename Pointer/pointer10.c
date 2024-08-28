#include<stdio.h>
int main()
{
    int a[100],i,n1,b[100],n2;
    int *p;

    printf("Enter a N for 1st Array:");
    scanf("%d",&n1);

    p=&a[0];

    for(i=0;i<n1;i++)   
        scanf("%d",&p[i]);

    printf("Enter a N for 2nd Array:");
        scanf("%d",&n2);

    printf("\nGiven data\n");
    p=&a[0];

    for(i=0;i<n1;i++)   
        printf("%d\n",p[i]);

    p-&b[i];

   
    printf("\n2nd array\n");
    for(i=0;i<n2;i++)   
        printf("%d\t",p[i]);
}