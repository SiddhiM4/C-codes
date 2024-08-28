#include<stdio.h>
int main()
{
    int i,n,z;

    printf("\nEnter N:");
    scanf("%d",&n);

    i=2;
    while(i<=n)
    {
        if(i%2==0)
        {
            printf("\n%d",i);
            z=z+i;
        }
        i++;
    }
    printf("\nSum=%d",z);
}