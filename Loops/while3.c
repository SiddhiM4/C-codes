//print even nos and print addition of nos
#include<stdio.h>
int main()
{
    int i,z=0;
    
        i=2;
        while(i<=20)
        {
            if(i%2==0)
            {
            printf("\n%d",i);
            z+=i;
            /*i=i+2;*/
            }
            i++;
        }
        printf("\nAddition=%d",z);
    
}