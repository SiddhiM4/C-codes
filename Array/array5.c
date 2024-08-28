//searching
#include<stdio.h>
int main()
{
    int i,n,key,a[100],flag;

    printf("How many numbers:");
    scanf("%d",&n);

    printf("\nEnter %d numbers\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    //searching
    printf("\nEnter key to search:");
    scanf("%d",&key);

    flag=1;
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            printf("\nNumber is found!");
            flag=0;
            break;
        }
    }
    if(flag)
        printf("Number not found!");
}