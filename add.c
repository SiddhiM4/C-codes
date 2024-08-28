#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,z,sub,mul;
    float div;
     printf("Enter any two numbers:");
     scanf("%d%d",&x,&y);
    z=x + y;   
    sub=x - y;
    mul=x * y;
    div=(float)x / y;                                               
    printf("\nAddition of %d and %d is %d",x,y,z);
    printf("\nSubtraction of %d and %d is %d",x,y,sub);
    printf("\nMultiplication of %d and %d is %d",x,y,mul);
    printf("\nDivision of %d and %d is %f",x,y,div);
    return 0;
}