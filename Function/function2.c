#include<stdio.h>
void carea();
void tarea();

int main(){
carea();
tarea();
return 0;
}

void carea()
{
    float r,area;
    printf("Enter radius:");
    scanf("%f",&r);
    area=3.14*r*r;
    printf("\nArea=%.2f",area);
}
void tarea()
{
    float b,h,area;
    printf("\nEnter base and height:");
    scanf("%f%f",&b,&h);
    area=0.5*b*h;
    printf("\nArea=%.2f",area);
}