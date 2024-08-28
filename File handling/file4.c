#include<stdio.h>
int main()
{
    FILE *fp1,*fp2,*t;
    char fs1[100],fs2[100],ch,target[100];

    printf("\nEnter 1st file name:");
    scanf("%s",&fs1);
    printf("\nEnter 2nd file name:");
    scanf("%s",&fs2);
    printf("\nEnter target file name:");
    scanf("%s",&target);

    fp1=fopen(fs1,"r");
    fp2=fopen(fs2,"r");
    t=fopen(target,"w");

    while (!feof(fp1))
    {
        char ch=getc(fp1);
        putc(ch,t);
    }

    while (!feof(fp2))
    {
        char ch=getc(fp2);
        putc(ch,t);
    }
    fclose(fp1);
    fclose(fp2);
    fclose(t);
    
    printf("\nFile Succesfully Merged!!");
    return 0;

}