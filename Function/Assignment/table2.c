//parameter , no return
#include<stdio.h>
void table(int);
int main()
{
    int n;
    printf("Enter number to display table:");
    scanf("%d",&n);

    table(n);
}
void table(int n)
{
    int a,b,i;

    
    i=1;
    while(i<=10)
    {
        printf("\n%d\t *\t%d\t=\t%d ",n,i,n*i);
        i++;
    }

}