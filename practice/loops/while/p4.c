#include<stdio.h>
int main()
{
    int ch;
    ch=65;
    while(ch<=90)
    {
        printf("\n%c\t:\t%d\t|\t%c\t:\t%d",ch,ch,ch+32,ch+32);
        ch++;
    }
}