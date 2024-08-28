#include<stdio.h>
int main()
{
    //initialization for employee details
    char name[10], dep[10],bank[10],desg[10];
    int eno,accno;
    //initialization of employee salary slip
    int basic,medical,special,gross,pf,health,deduction,salary;

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

    
    //enter salary details
    printf("\nEnter Basic Salary :");
    scanf("%d",&basic);
    printf("\nEnter medical alllowance:");
    scanf("%d",&medical);
    printf("\nEnter special allowance:");
    scanf("%d",&special);
    printf("\nEnter Provident Fund amount:");
    scanf("%d",&pf);
    printf("\nEnter health insurance amount:");
    scanf("%d",&health);

    gross=basic+medical+special;
    deduction=pf+health;
    salary=gross-deduction;

    //displaying salary
    printf("\nSALARY SLIP DECEMBER 2023");
    printf("\nName\t\t|\t %s",name);
    printf("\t\tDepartment |\t %s",dep);
    printf("\nEmployee No \t|\t %d",eno);
    printf("\t\tDesignation|\t %s",desg);
    printf("\n");
    printf("\n-----------------------------------------------------------------");
    printf("\nEarnings\t\t\t\t Deductions");
    printf("\n-----------------------------------------------------------------");
    printf("\nBasic Salary\t\t|\t%d",basic);
    printf("\t\tPF\t\t\t|\t%d",pf);
    printf("\nMedical Allowance\t|\t%d",medical);
    printf("\t\tHealth Insurance\t|\t%d",health);
    printf("\nSpecial Allowance\t|\t%d",special);
    printf("\n");
    printf("\n-----------------------------------------------------------------");
    printf("\n");
    printf("\nGross Salary\t\t|\t%d",gross);
    printf("\t\tTotal Deductions\t|\t%d",deduction);
    printf("\n");
    printf("\n-----------------------------------------------------------------");
    printf("\n");
    printf("\nNET SALARY=%d",salary);
}