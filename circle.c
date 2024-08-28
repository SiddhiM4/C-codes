#include<stdio.h>

int main()
{
    float area;
    int r;

    printf("Enter radius of circle:");
    scanf("%d",&r);

    area=3.14*r*r;

    printf("Area of circle whose radius %d = %.2f",r,area);

    return 0;
}