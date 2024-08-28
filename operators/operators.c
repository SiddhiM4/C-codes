#include<stdio.h>
int main()
{
    //logical operator
   /* int x=1,y=0,z;
    int s1=50,s2=60,s3=39;

    printf("\nx && y= %d",(x&&y));
    printf("\nx || y= %d",(x||y));

    if((s1>=40) && (s2>=40) || (s3>=40))
    {
        printf("\nPass");
    }
    else printf("\nFAIL");
    int a=1,b=0;
    printf("\n !a=%d",!a);
    */

   //conditional operators
   
    int z,a,b,c;

    printf("\nEnter three numbers a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    
    z=(a>b)?(a>c?a:b):(b>c?b:c);

    printf("\n%d",z);
    return 0;
}