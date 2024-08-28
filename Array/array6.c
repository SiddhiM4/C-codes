//occurence
#include<stdio.h>
int main()
{
    int i,n,key,a[100],cnt=0;

    printf("How many numbers:");
    scanf("%d",&n);

    printf("\nEnter %d nos\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
//occurence
    printf("\nEnter number of occurences:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(key == a[i])
        cnt++;
    }

    if(cnt > 0)
        printf("\nOccurences of %d found %d times.",key,cnt);
    else 
        printf("\nNumber not found");
}