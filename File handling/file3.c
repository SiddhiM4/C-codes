//append
#include<stdio.h>
int main()
{
    FILE *fp;

    char fname[100],ch;

    printf("\nEnter file name:");
    scanf("%s",fname);

    fp=fopen(fname,"a");

    while((ch=getchar())!=EOF)
    {
        putc(ch,fp);
    }
    fclose(fp);
}