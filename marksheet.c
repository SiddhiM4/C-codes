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

    printf("\n---------------------------");
    printf("\n\tName\t\t:\t%s",name);
    printf("\n\tRoll no\t\t:\t%d",rollno);
    printf("\n\tMaths\t\t:\t%d",sub1);
    printf("\n\tElec\t\t:\t%d",sub2);
    printf("\n\tCompt\t\t:\t%d",sub3);
    printf("\n\tTotal\t\t:\t%d",total);
    printf("\n\tPercentage\t:\t%.2f",pcnt);
    printf("\n---------------------------");

    return 0;
}