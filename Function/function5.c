// with return type and arguement
#include <stdio.h>

float carea(float);
float tarea(float, float);

int main()
{
    float ta, ca;
    float r, b, h;

    printf("\nEnter radius:");
    scanf("%f", &r);
    ca = carea(r);
    printf("\nArea=%f", ca);

    printf("\nEnter base and height:");
    scanf("%f%f", &b, &h);
    ta = tarea(b, h);
    printf("\nArea=%f", ta);
}

float carea(float r)
{
    return 3.14 * r * r;
}

float tarea(float b, float h)
{
    return 0.5 * b * h;
}