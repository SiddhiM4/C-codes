#include<stdio.h>
#include<ctype.h>
int sum()
{
    int result=0;
    char num;

    while(1)
    {
        scanf("%c",&num);
        if(isdigit(num))
            result =+ (num - '0');
        else 
        break;
    }
}
int main()
{
    printf("\nAddition is : %c",sum());
    return 0;
}