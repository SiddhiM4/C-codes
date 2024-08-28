#include<stdio.h>
float circlearea();
float trianglearea();

int main()
{
    float ta,ca;
    ca=circlearea();
    printf("\nArea of circle:%f",ca);
    ta=trianglearea();
    printf("\nArea of triangle:%f",ta);
    return 0;
}
float circlearea()
{
    float r,ca;
    printf("Enter radius:");
    scanf("%f",&r);
    ca=3.14*r*r;
    return ca;

}
float trianglearea()
{
    float b,h,tarea;
    printf("\nEnter base and height:");
    scanf("%f%f",&b,&h);
    tarea=0.5*b*h;
    return tarea;
}