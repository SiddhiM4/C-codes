#include<stdio.h>
typedef struct player{
    int no;
    char name[100],team[100];
    float exp;
}player;

void accept(player *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nEnter jersey number:");
        scanf("%d",&p[i].no);

        printf("\nEnter name:");
        scanf("%s",&p[i].name);

        printf("\nEnter team name:");
        scanf("%s",&p[i].team);

        printf("\nEnter experience:");
        scanf("%f",&p[i].exp);

    }
}
void display(player p[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nJersey number:%d",p[i].no);
        printf("\nName:%s",p[i].name);
        printf("\nTeam:%s",p[i].team);
        printf("\nExperience:%.1f\n",p[i].exp);
    }
}
int main()
{
    player p[100];
    int n;
    printf("Enter n:");
    scanf("%d",&n);
   accept(&p,n);
   display(p,n);
    return 0;
}