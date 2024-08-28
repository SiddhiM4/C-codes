#include<stdio.h>
int main()
{
    int i,n,key,a[100],cnt=0;

    printf("Enter N:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter number to know occurences:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            cnt++;
        }
    }
    if(cnt>0)
        printf("\n%d occurences=%d",key,cnt);
    else 
        printf("\nnot found!");
}