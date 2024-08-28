#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    if(n>0)
    {
        printf("\n%d is a positive number",n);
    }
    else if(n<0)
    {
        printf("\n%d is a negative number",n);
    }
    else
    {
        printf("\nIt is ZERO");
    }
}