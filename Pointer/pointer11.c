//occurence
#include<stdio.h>
int main()
{
    int n,i,cnt=0,a[10],temp,key,j;
    
    printf("\nEnter N:");
    scanf("%d",&n);
    

    printf("\nEnter %d elements:",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        cnt=1;
        if(a[i]!=-1)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    cnt++;
                    a[j]=-1;
                }
            }
            printf("\nOccurences of %d = %d",a[i],cnt);
        }
    }
}