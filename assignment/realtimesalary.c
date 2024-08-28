#include<stdio.h>
int main()
{
    //initialization for employee details
    char name[10], dep[10],bank[10],desg[10];
    int eno,accno,urban,c;
    //initialization of employee salary slip
    float basic,hra,da,ma,sa,proft,tds,pf,earning,deduction,gross,net;
    
    main:
    //enter employee details
    printf("Enter Name of Employee-");
    scanf("%s",&name);
    printf("\nEnter employee ID-");
    scanf("%d",&eno);
    printf("\nEnter Department-");
    scanf("%s",&dep);
    printf("\nEnter Designation-");
    scanf("%s",&desg);
    printf("\nEnter Account Number");
    scanf("%s",&accno);   

    //basic salary
    printf("\nEnter basic salary");
    scanf("%f",&basic);

    printf("\nWorkpace in urban or rural, press 1 for urban:");
    scanf("%d",&urban);\
    //house rent allowance calculation
    if(urban==1)
    {
        hra=basic*0.5;
    }
    else{
        hra=basic*0.4;
    }
    da=basic*0.5;//dearness allowance 50%
    ma=basic*0.12;//medical allowance 12%
    sa=basic*0.15;//special allowance 15%

    earning=basic+da+ma+sa;

    proft=200;//mostly fixed amount
   
    pf=1800;//provident fund-varies
    //calculations
    deduction=proft + tds + pf;
    gross=earning;
     //tax deducted at source
    if(basic>30000)
    {
        tds=gross*0.10;
    }
    else
    {
        printf("\n-");
    }

    net=earning-deduction;

    printf("\nSALARY SLIP DECEMBER 2023");
    printf("\nName\t\t|\t %s",name);
    printf("\t\tDepartment |\t %s",dep);
    printf("\nEmployee No \t|\t %d",eno);
    printf("\t\tDesignation|\t %s",desg);
    printf("\n");
    printf("\n-----------------------------------------------------------------");
    printf("\nEarnings\t\t\t\t");
    printf("\n-----------------------------------------------------------------");
    printf("\nBasic Salary\t\t|\t%f",basic);
    printf("\nHouse Rent Allowance\t|\t%f",hra);
    printf("\nDearness Allowance\t|\t%f",da);
    printf("\nMedical Insurance\t|\t%f",ma);
    printf("\nSpecial Allowance\t|\t%f",sa);
    printf("\n-----------------------------------------------------------------");
    printf("\nDeductions\t\t\t\t");
    printf("\n-----------------------------------------------------------------");
    printf("\nProfessional Tax\t|\t%f",proft);
    printf("\nTax Deducted at Source\t|\t%f",tds);
    printf("\nProvident Fund\t\t|\t%f",pf);
    printf("\n");
    printf("\n-----------------------------------------------------------------");
    printf("\n");
    printf("\nTotal earnings\t\t|\t%f",earning);
    printf("\nTotal Deductions\t|\t%f",deduction);
    printf("\nGross Salary\t\t|\t%f",gross);
    
    printf("\n");
    printf("\n-----------------------------------------------------------------");
    printf("\n");
    printf("\nNET SALARY=%f",net);

    printf("\nDo you want to continue, if yes press 1:");
    scanf("%d",&c);
    if(c==1)
    {
        goto main;
    }
}   