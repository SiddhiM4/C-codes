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
    int n, i, key;

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

    printf("\nEnter roll number to search:");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (key == s[i].roll)
        {
            printf("\nName - %s", s[i].name);
            printf("\nRoll no - %d", s[i].roll);
            printf("\nMarks - %.2f\n\n", s[i].marks);
        }
    }
    printf("\nNOT FOUND!");
    return 0;
}