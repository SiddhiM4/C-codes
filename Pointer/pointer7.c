#include<stdio.h>
int main()
{
    int a[100],even[100],odd[100],*p,*q,i,j,n,o,e;
    e=o=0;
    p=&even[0];
    q=&odd[0];

    printf("Enter array:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            *(p+e)=a[i];
            e++;
        }
        else{
            *(q+o)=a[i];
            o++;
        }
    }
    if(e>0)
    {
        printf("\nEven numbers");
        for(i=0;i<e;i++,p++)
        {
            printf("\n%d\t",*p);
        }
    }
    if(o>0)
    {
        printf("\nOdd numbers");
        for(i=0;i<o;i++,q++)
        {
            printf("\n%d\t",*q);
        }
    }

}