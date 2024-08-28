//areas
#include<stdio.h>
int main()
{
    int ch;
    float r,ac,b,h,at,len,brea,ar;
    printf("\nArea for following : \n1.Circle\n2.Triangle\n3.Reactangle\nEnter your choice:");
    scanf("%d",&ch);
   
    switch(ch)
    {
        case 1://area of circle
        printf("\nEnter radius:");
        scanf("%f",&r);
        ac=3.14*r*r;
        printf("\nArea of circle = %.2f",ac);
        break;

        case 2://area of triangle
        printf("\nEnter base and height:");
        scanf("%f%f",&b,&h);
        at=0.5*b*h;
        printf("\nArea of triangle = %.2f",at);
        break;

        case 3://area of rectangle
        printf("\nEnter length and breadth of rectangle:");
        scanf("%f%f",&len,&brea);
        ar=len*brea;
        printf("\nArea of rectangle = %.2f",ar);
        break;

        default:
        printf("\nInvalid choice");
    }

}