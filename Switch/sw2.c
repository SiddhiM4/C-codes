//areas with char
#include<stdio.h>
int main()
{
    char ch,z;
    float r,ac,b,h,at,len,brea,ar;
    main:
    printf("\nArea of Cricle\t\tC|c\nArea of Triangle\tT|t\nArea of Rectangle\tR|r");
    printf("\nEnter your choice:");
    scanf("%s",&ch);

    switch(ch)
    {
        case 'C'://area of cirlce
        case 'c':
        printf("\nEnter radius:");
        scanf("%f",&r);
        ac=3.14*r*r;
        printf("\nArea of circle = %.2f",ac);
        break;

        case 'T'://area of triangle
        case 't':
        printf("\nEnter base and height:");
        scanf("%f%f",&b,&h);
        at=0.5*b*h;
        printf("\nArea of triangle = %.2f",at);
        break;

        case 'R'://area of rectangle
        case 'r':
         printf("\nEnter length and breadth of rectangle:");
        scanf("%f%f",&len,&brea);
        ar=len*brea;
        printf("\nArea of rectangle = %.2f",ar);
        break;

        default:
        printf("\nInvalid choice");
        
    }
    printf("\nDo you want continue, then press 1:");
    scanf("%d",&z);
    if(z==1)
    {
        goto main;
    }
}