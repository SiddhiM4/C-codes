#include<stdio.h>
int main()
{
    int ch,c;
    float ra,ta,ca,b,h,r,len,bre;

    menu:

    printf("\n1.Area of circle:\n2.Area of triangle:\n3.Area of rectangle:");
    scanf("%d",&ch);


    if(ch==1)
    {
        printf("\nEnter radius of cirle:");
        scanf("%f",&r);
        ca=3.14*r*r;
        printf("\nArea of circle : %.2f",ca);
    }
    else if(ch==2)
    {
        printf("\nEnter base and height of triangle:");
        scanf("%f%f",&b,&h);
        ta=0.5*b*h;
        printf("\nArea of triangle : %.2f",ta);
    }
    else if(ch==3)
    {
        printf("\nEnter length and breadth of rectangle:");
        scanf("%f%f",&len,&bre);
        ra=len*bre;
        printf("\nArea of rectangle = %.2f",ra);
    }

    printf("\nIf you want to continue press 1:");
    scanf("%d",&c);
    if(c==1)
    {
        goto menu;
    }
}