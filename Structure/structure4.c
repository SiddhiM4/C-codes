// maximum nos
#include <stdio.h>
#include <stdio.h>

struct student
{
    int roll;
    char name[100];
    float marks;
};
int main()
{
    struct student s[100];
    int n, i,loc,max;

    printf("\nEnter n:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter roll no-");
        scanf("%d", &s[i].roll);
        printf("\nEnter name-");
        scanf("%s", &s[i].name);
        printf("\nEnter marks-");
        scanf("%f", &s[i].marks);
    }

    max=s[0].marks;
    loc=0;
    for(i=0;i<n;i++)
    {
        if(max < s[i].marks)
        {
            max=s[i].marks;
            loc=i;
        }
    }
    printf("\nName - %s", s[loc].name);
    printf("\nRoll no - %d", s[loc].roll);
    printf("\nMarks - %.2f\n\n", s[loc].marks);

    return 0;
}