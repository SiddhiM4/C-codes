//searching
#include<stdio.h>
int main()
{
    int a[100],n,i,key,flag;

    printf("Enter N:");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

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
        printf("\nNumber not found!");
}