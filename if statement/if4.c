#include<stdio.h>
int  main()
{
    int age;
    printf("Enter any age:");
    scanf("%d",&age);

    if(age < 0)
    {
        age=-age;
        printf("\nHello");
    }
    printf("\nThe given age is:%d",age);
    return 0;
}