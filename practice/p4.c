#include<stdio.h>
int main()
{
    int i,j,cnt=1,n;

    printf("Enter rows:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",cnt);
            cnt++;
        }
        printf("\n");
    }
}