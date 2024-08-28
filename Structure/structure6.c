#include<stdio.h>
typedef struct player{
    int no;
    char name[100],team[100];
    float exp;
}player;
int main()
{
    player p;

    printf("\nEnter jersey number:");
    scanf("%d",&p.no);

    printf("\nEnter name:");
    scanf("%s",&p.name);

    printf("\nEnter team name:");
    scanf("%s",&p.team);

    printf("\nEnter experience:");
    scanf("%f",&p.exp);

    printf("\nDisplaying player\n");
    printf("\nJersey number:%d",p.no);
    printf("\nName:%s",p.name);
    printf("\nTeam:%s",p.team);
    printf("\nExperience:%.1f",p.exp);

    return 0;
}