#include<stdio.h>
int main()
{
    int cusid,noofunits;
    char name[10];
    float cgst,sgst,total,finaltotal;

    printf("Enter customer id-");
    scanf("%d",&cusid);
    printf("\nEnter customer name-");
    scanf("%s",&name);
    printf("\nEnter units consumed:");
    scanf("%d",&noofunits);

    if(noofunits <= 100 )
    {
        total=noofunits *3.33;
    }
    else if((noofunits >= 100) && (noofunits < 300))
    {
        total=(100*3.33) + (noofunits - 100)*5.55;
    }
    else if((noofunits >=300) && (noofunits <500))
    {
        total=(100*3.33) + (200*5.55) +(noofunits - 300)*8.88;
    }
    else if(noofunits>=500)
    {
        total=(100*3.33) + (200*5.55) +(200*8.88) +(noofunits - 500)*11.11;
    }
    else printf("\nInvalid choice!");

    cgst=total*0.06;
    sgst=total*0.06;
   
    finaltotal=cgst+sgst+total;

    printf("\n\t\tCustomer Id \t\t|\t\t\t %d",cusid);
    printf("\n\t\tCustomer Name \t\t|\t\t\t %s",name);
    printf("\n\t\tUnits Consumed\t\t|\t\t\t %d",noofunits);
    printf("\n\t\tCGST\t\t\t|\t\t\t %f",cgst);
    printf("\n\t\tSGST\t\t\t|\t\t\t %f",sgst);
    printf("\n\t\tTotal\t\t\t|\t\t\t %f",total);
    printf("\n\t\tFinal total\t\t|\t\t\t%f",finaltotal);

    return 0;
}