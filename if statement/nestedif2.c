#include<stdio.h>
int main()
{
    int ch1,ch2,rupees,c,dollars,euros;
    int inputamt,outputresult;
    menu:
    printf("\n1.Rupees\n2.Dollar\n3.Euro:");
    printf("\nEnter your choice:");
    scanf("%d",&ch1);//ch=1
    
    if(ch1==1)//your amt in rupees
    {
        rupee:
        printf("\nEnter amount in rupees:");
        scanf("%d",&inputamt);

        printf("\nEnter your choice to convert your currency:");
        printf("\n1.Rupees\n2.Dollar\n3.Euro:");
        scanf("%d",&ch2);//ch2=1

        if(ch2==1)//rupees rupees
        {
            outputresult=inputamt;
            printf("\n%d rupee = %d rupee",inputamt,outputresult);
        }
        else if(ch2==2)//rupees to dollar
        {
            outputresult=inputamt/83;
            printf("\n %d rupees = %d dollars",inputamt,outputresult);
        }
        else if(ch2==3)//rupees to euro
        {
            outputresult=inputamt/90;
            printf("\n%d rupees = %d euro",inputamt,outputresult);
        }
        printf("\nDo you continue with rupees, then press 1:");
        scanf("%d",&rupees);
        if(rupees==1)
        {
            goto rupee;
        }
    }
    //end of rupees
    else if(ch1==2)//your amt in dollars
    {
        dollar:
        printf("\nEnter amount in dollara:");
        scanf("%d",&inputamt);

        printf("\nEnter your choice to convert your currency:");
        printf("\n1.Rupees\n2.Dollar\n3.Euro:");
        scanf("%d",&ch2);//ch2=1

        if(ch2==1)//dollars to rupees
        {
            outputresult=inputamt*83;
            printf("\n%d dollars = %d rupee",inputamt,outputresult);
        }
        else if(ch2==2)//dollar to dollar
        {
            outputresult=inputamt;
            printf("\n %d dollar = %d dollars",inputamt,outputresult);
        }
        else if(ch2==3)//dollar to euro
        {
            outputresult=inputamt*0.90;
            printf("\n%d rupees = %d euro",inputamt,outputresult);
        }
        printf("\nDo you want to continue in dollars,press 1:");
        scanf("%d",&dollars);
        if(dollars==1)
        {
            goto dollar;
        }
    }
    //end of dollars
    else if(ch1==3)//your amt in euros
    {
        euro:
        printf("\nEnter amount in euros:");
        scanf("%d",&inputamt);

        printf("\nEnter your choice to convert your currency:");
        printf("\n1.Rupees\n2.Dollar\n3.Euro:");
        scanf("%d",&ch2);//ch2=1

        if(ch2==1)//euros to rupees
        {
            outputresult=inputamt*100;
            printf("\n%d euro = %d rupee",inputamt,outputresult);
        }
        else if(ch2==2)//euros to dollar
        {
            outputresult=inputamt*0.1;
            printf("\n %d euros = %d dollars",inputamt,outputresult);
        }
        else if(ch2==3)//euro to euro
        {
            outputresult=inputamt;
            printf("\n%d euros = %d euro",inputamt,outputresult);
        }
        printf("\nDo yuou want to continue in euros, press 1:");
        scanf("%d",&euros);
        if(euros==1)
        {
            goto euro;
        }
    }
    //end of euros
    printf("\nDo you want to continue:");
    scanf("%d",&c);
    if(c==1)
    {
        goto menu;
    }
    return 0;
}