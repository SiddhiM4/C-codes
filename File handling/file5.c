#include <stdio.h>
int main()
{
    FILE *fp;

    char fname[100], ch, data[100];
    int ccnt, wcnt, lcnt;
    ccnt = wcnt = lcnt = 0;

    printf("\nEnter file name:");
    scanf("%s", &fname);

    fp = fopen(fname, "r");

    while (!feof(fp))
    {
        ch = getc(fp);
        if (ch == '\n')
        {
            lcnt++;
            wcnt++;
        }
        else if (ch == ' ')
            wcnt++;
            ccnt++;
    }

    printf("\n Word count = %d", wcnt+1);
    printf("\n Line count = %d", lcnt+1);
    printf("\n Character count = %d", ccnt);
    fclose(fp);
}