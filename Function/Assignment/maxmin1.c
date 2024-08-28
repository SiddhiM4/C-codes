//no parameter, no return
#include<stdio.h>

void maxmin();

int main()
{
    maxmin();
}

void maxmin()
{
    int a,b;
    printf("Enter two numbers: \n");
    scanf("%d%d",&a,&b);
    if(a>b)
    printf("Max is %d\n",a);
    else
    printf("Max is %d\n",b);
}