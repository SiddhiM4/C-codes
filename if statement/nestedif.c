//nested if for students marksheet
#include<stdio.h>
int main()
{
    int rollno;
    char name[10];
    int sub1,sub2,sub3,total;
    float pcnt;

    printf("Enter roll number-");
    scanf("%d",&rollno);
    printf("Enter name:");
    scanf("%s",&name);
    printf("Enter subject marks:");
    scanf("%d%d%d",&sub1,&sub2,&sub3);

    total=sub1+sub2+sub3;
    pcnt=((float)total)/300*100;

    printf("\n-----------------------------------------------------------");
    printf("\n\tName\t\t:\t%s",name);
    printf("\n\tRoll no\t\t:\t%d",rollno);
    printf("\n\tMaths\t\t:\t%d",sub1);
    printf("\n\tElec\t\t:\t%d",sub2);
    printf("\n\tCompt\t\t:\t%d",sub3);
    printf("\n\tTotal\t\t:\t%d",total);
    printf("\n\tPercentage\t:\t%.2f",pcnt);
    printf("\n------------------------------------------------------------");

    if((sub1>=40) && (sub2>=40) && (sub3>=40))
    {
        printf("\n\tPASS");
        if(pcnt>=40 && pcnt<60)
        {
            printf("\n\tGrade 'A");
        }
        else if(pcnt>=60 && pcnt <75)
        {
            printf("\n\tGrade 'B'");
        }
        else printf("\n\tGrade 'A'");
    }
    else printf("\n\tFAIL");

    return 0;
} 