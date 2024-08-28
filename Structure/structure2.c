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
    int n, i;

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

    for (i = 0; i < n; i++)
    {
        printf("\nName - %s", s[i].name);
        printf("\nRoll no - %d", s[i].roll);
        printf("\nMarks - %.2f\n\n", s[i].marks);
    }

    return 0;
}