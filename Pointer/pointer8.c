//sorting
#include<stdio.h>
int main()
{
    int i,j,n,a[100],temp;
    int *p;

    p=&a[0];

    printf("\nEnter N:");
    scanf("%d",&n);

    printf("\nEnter elements-");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]); 
    //sorting
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(p[i] > p[j])
            {
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
    printf("\nSorted elements\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}