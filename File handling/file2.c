#include<stdio.h>
int main()
{
    FILE *fp;
    char fname[100],ch;

    printf("\nEnter a file name:");
    scanf("%s",fname);

    fp=fopen(fname,"r");

    while (!feof(fp))
    {
        ch=getc(fp);
        printf("%c",ch);
    }
    fclose(fp);
    return 0;

}