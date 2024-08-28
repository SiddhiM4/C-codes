//even odd count
#include<stdio.h>
int main()
{
    int i,j,n,a[100],cnt1=0,cnt=0;

    printf("Enter how many numbers:");
    scanf("%d",&n);

    printf("\nEven nos from 2 to %d are\n",n);
    for(i=0;i<n;i++)
    {
        a[i]=i+1;
        {
            if(a[i]%2==0)
            {
                printf("\t%d",a[i]);
                cnt1++;
            }
        }
    }
    printf("\nCount of even numbers=%d",cnt1);
    //odd
    printf("\nOdd nos from 3 to %d are\n",n);
    for(i=0;i<n;i++)
    {
        a[i]=i+1;
        {
        if(a[i]%2!=0)
        {
            printf("\t%d",a[i]);
            cnt++;
        }
        }
    }
    printf("\nCount of odd numbers=%d",cnt);

}