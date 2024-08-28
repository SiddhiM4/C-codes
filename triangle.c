#include<stdio.h>
int main()
{
    int b,h;
    float area;

    printf("Enter base and height of triangle:");
    scanf("%d%d",&b,&h);

    area=0.5*b*h;

    printf("\nArea of triangle = %.2f",area);

    return 0;
}