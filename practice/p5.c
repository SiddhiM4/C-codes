#include<stdio.h>
int main()
{
    int i,j,n,cnt=1;

    printf("Enter rows:");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d ",cnt);
            cnt++;
        }
        printf("\n");
    }
}