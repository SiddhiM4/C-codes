#include<stdio.h>
int main()
{
    int e,x=4,y=5,a,b,c,d;
    a=x&y;
    b=x|y;
    c=x^y;
    d=x<<2;
    e=y>>1;
    printf("\na=%d\nb=%d\nc=%d\nd=%d\ne=%d",a,b,c,d,e);
}