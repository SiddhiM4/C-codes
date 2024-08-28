//vowel count
#include <stdio.h>
int main()
{
    FILE *fp;

    char fname[100], ch, data[100];
    int ccnt=0;
    

    printf("\nEnter file name:");
    scanf("%s", &fname);

    fp = fopen(fname, "r");

    while (!feof(fp))
    {
        ch = getc(fp);
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'|| ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
           ccnt++;
        }
    }
    printf("\n Vowel count = %d", ccnt);
    fclose(fp);
}