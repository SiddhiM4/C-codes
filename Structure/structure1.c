#include <stdio.h>

struct student
{
    int roll;
    char name[100];
    float marks;
};
int main()
{
    struct student s;

    printf("\nEnter roll no-");
    scanf("%d", &s.roll);
    printf("\nEnter name-");
    scanf("%s", &s.name);
    printf("\nEnter marks-");
    scanf("%f", &s.marks);

    printf("\nName -%s", s.name);
    printf("\nRoll no -%d", s.roll);
    printf("\nMarks -%.2f", s.marks);

    return 0;
}