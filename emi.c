#include<stdio.h>
#include<math.h>
int main()
{
    float amt,tenure,pri;
    float interest,emi,monthlyint;

    //details from user
    printf("\nEnter loan amount-");
    scanf("%f",&amt);
    printf("\nEnter tenure(in years)-");
    scanf("%f",&tenure);
    printf("\nEnter interest rate-");
    scanf("%f",&interest);

    pri=amt;
    monthlyint=interest/(12*100);
    emi = (pri*monthlyint*pow((1+monthlyint),tenure*12))/(pow((1+monthlyint),tenure*12)-1);


    printf("\nEMI:%.2f",emi);
}