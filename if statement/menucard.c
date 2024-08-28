#include<stdio.h>
int main()
{
    //starters maincourse desserts,sgst,cgst
    //veg , non veg
    //use cnt=0,total=0
    //if order is not placed dont print bill
    int veg,nonveg;
    int starters,main,des,total=0;
    int ch,ch1,ch2;

    printf("\nWhat would you like to order?");

    printf("\n1.Starters\n2.Main Course\n3.Desserts\n4.Breads\n5.Rice\nEnter your choice-");
    scanf("%d",&ch);
    if(ch==1)
    {
        //for starters
    printf("\n-----------Starters-----------");
    printf("\n1.Masala Pappad\tRs.70\n2.Paneer Chilli\tRs.150\n3.Cheese Corn Nuggets\tRs.170\n4.Spring Roll\tRs.180\n5.Paneer 65\tRs.220");
    printf("\nEnter your choice-");
    scanf("%d",&ch1);
    if(ch1==1)//masala pappad
    {
        total=total+70;
    }
    else if(ch1==2)//paneer chilli
    {
        total=total+150;
    }
    else if(ch1==3)//cheese corn nuggets
    {
        total=total+170;
    }
    else if(ch1==4)//spring roll
    {
        total=total+180;
    }
    else if(ch1==5)//paneer 65
    {
        total=total+220;
    }
    else
    {
        printf("\nInvalid choice");
    }
    //end of starters
    }
    else if(ch==2)
    {
        //for main course
        printf("\n--------------Main Course-------------");
        printf("\n1.Butter Paneer\tRs.300\n2.Mix Veg\tRs.300\n3.Masala Bhendi\tRs.250\n4.Paneer Masala\tRs.300\n5.Kaju Curry\tRs.330");
        scanf("%d",&ch2);//ch2=for main course
        if(ch2==1)//butter paneer
        {
            total=total+300;
        }
        else if(ch==1)
        {
            
        }
    }
    else if(ch==3)
    {
        //for desserts

    }

    //printing bill


}