//parameter, no return
#include<stdio.h>
void maxmin(int,int);

int main()
{
    int a,b;
    printf("Enter two numbers: \n");
    scanf("%d%d",&a,&b);
    maxmin(a,b);
}

void maxmin(int a,int b)
{
    
    if(a>b)
    printf("Max is %d\n",a);
    else
    printf("Max is %d\n",b);
}