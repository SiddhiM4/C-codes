#include<stdio.h>
int main()
{
    //EXAMPLE 1
   /*
    int b,a,x=1,y=1;
    a= x++ + x++ + x++ + x++ + x++;
    b= ++y + ++y + ++y + ++y + ++y;
    printf("\n%d",a);
    printf("\n%d",b);
    printf("\n%d",x);
    printf("\n%d",y);
    */ // Ans- a=15,b=21,x=6,y=6
    
    //EXAMPLE 2
    /*int z,a=1,b=1;
    z=a++ && ++b;
    printf("\n%d",z);
    printf("\n%d",a);
    printf("\n%d",b);
    */ //Ans-z=1,a=2,b=2

    //EXAMPLE 3
    /*int c,a=0,b=1;
    c=++a || ++b;
    printf("\n%d",c);
    printf("\n%d",a);
    printf("\n%d",b);
    */ //Ans-a=b=c=1

    //EXAMPLE 4
    /*int c,a=0,b=1;
    c=++a && ++b;
    printf("\n%d",c);
    printf("\n%d",a);
    printf("\n%d",b);
    */ //Ans-c=1,a=1,b=2



    return 0;
}