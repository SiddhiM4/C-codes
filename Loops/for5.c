//print ascii value
#include<stdio.h>
int main()
{
    int ch;
    for(ch=65;ch<=90;ch++)
    {
        printf("\n%d\t:\t%c\t|\t%d\t:\t%c",ch,ch,ch+32,ch+32);
    }
}