//print ascii value
#include<stdio.h>
int main()
{
    int ch;

    ch=65;
    while(ch<=90)
    {
        printf("\n%d\t:\t%c | %d\t\t:\t%c",ch,ch,ch+32,ch+32);
        ch++;
    }
}
