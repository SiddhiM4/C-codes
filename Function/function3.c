#include<stdio.h>
void circlearea(float);
void trianglearea(float,float);
void rectanglearea(float,float);

int main()
{
    float r,b,h,l,brea;

    printf("Enter radius:");
    scanf("%f",&r);
    circlearea(r);

    printf("\nEnter base and height of triangle:");
    scanf("%f%f",&b,&h);
    trianglearea(b,h);

    printf("\nEnter length of rectangle:");
    scanf("%f%f",&l,&brea);
    rectanglearea(l,brea);

    return 0;
}

void circlearea(float r)
{
    float carea;
    carea=3.14*r*r;;
    printf("\nArea=%.2f",carea);
}
void trianglearea(float b, float h)
{
    float tarea;
    tarea=0.5*b*h;
    printf("\nArea=%.2f",tarea);
}
void rectanglearea(float l,float brea)
{
    float rarea;
    rarea=l*brea;
    printf("\nArea=%.2f",rarea);
}