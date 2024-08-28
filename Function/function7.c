#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch1,ch2;

    printf("Enter character:");
    scanf("%c",&ch1);

    if(isupper(ch1))
        printf("\nLower is : %c",tolower(ch1));
    else if(islower(ch1))
        printf("Upper is : %c",toupper(ch1));
}