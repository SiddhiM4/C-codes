#include<stdio.h>
int swap(int,int);

int main()
{
    int a,b;
    printf("\nEnter two numbers:");
    scanf("%d%d",&a,&b);
    swap(a,b);
    printf("\nAfter swapping:");
    printf("\na=%d\nb=%d",a,b);
    
}
int swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}