// union employee - id ,chr name, float salary
#include <stdio.h>
union employee
{
    int id;
    char name[100];
    float salary;
};
int main()
{
    union employee e1;
    printf("\nEnter id-");
    scanf("%d", &e1.id);
    printf("\nEmployee id - %d", e1.id);

    printf("\nEnter name-");
    scanf("%s", &e1.name);
    printf("\nEmployee name - %s", e1.name);

    printf("\nEnter salary-");
    scanf("%f", &e1.salary);
    printf("\nEmployee salary - %.2f", e1.salary);

    return 0;
}