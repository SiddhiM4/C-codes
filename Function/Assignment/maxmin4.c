//parameter, return type
//no parameter, return
#include<stdio.h>
int maxmin(int ,int);

int main()
{
    int ans;
    int a,b;
    printf("Enter two numbers: \n");
    scanf("%d%d",&a,&b);

    ans=maxmin(a,b);
    printf("\nMaximum is %d",ans);
}

int maxmin(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}