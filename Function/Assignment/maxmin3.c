//no parameter, return
#include<stdio.h>
int maxmin();

int main()
{
    int ans;

    ans=maxmin();
    printf("Maximum is %d",ans);
}

int maxmin()
{
    int a,b;
    printf("Enter two numbers: \n");
    scanf("%d%d",&a,&b);
    if(a>b)
        return a;
    else
        return b;
    return a;
}