// maximum nos
#include <stdio.h>

typedef struct student
{
    int roll;
    char name[100];
    float marks;
}student;

void accept(student *s,int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nEnter roll no-");
        scanf("%d", &s[i].roll);
        printf("\nEnter name-");
        scanf("%s", &s[i].name);
        printf("\nEnter marks-");
        scanf("%f", &s[i].marks);
    }
}
void mindisp(student s[100],int n)
{
    int i,loc;
    float min;
    min=s[0].marks;
    loc=0;
    for(i=0;i<n;i++)
    {
        if(min > s[i].marks)
        {
            min=s[i].marks;
            loc=i;
        }
    }
    printf("\nName - %s", s[loc].name);
    printf("\nRoll no - %d", s[loc].roll);
    printf("\nMarks - %.2f\n\n", s[loc].marks);
}
int main()
{
    student s[100];
    int n, i,loc;

    printf("\nEnter n:");
    scanf("%d", &n);

    accept(&s,n);
    mindisp(s,n);

    return 0;
}