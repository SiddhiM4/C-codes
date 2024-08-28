#include<stdio.h>
int main()
{
    char name[10];
    int accno,monamt,months,interest,totalmon,pri;

    printf("Enter acoount number - ");
    scanf("%d",&accno);
    printf("\nEnter Customer Name:");
    scanf("%s",&name);

    printf("\nEnter amount of SIP:");
    scanf("%d",&monamt);
    printf("\n How many months-");
    scanf("%d",&months);

    pri=months*monamt;
    totalmon=pri+(monamt*7.5*months)/100;

    printf("\nSIP DETAILS");
    printf("\nName=%s",name);
    printf("\nPrincipal=%d",pri);
    printf("\nTotal months=%d",months);
    printf("\nTotal amount with interest=%d",totalmon);

    return 0;

}