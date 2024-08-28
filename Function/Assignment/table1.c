//no parameter , no return
#include<stdio.h>
void table();
int main()
{
    table();
}
void table()
{
    int n,a,b,i;

    printf("Enter number to display table:");
    scanf("%d",&n);

    i=1;
    while(i<=10)
    {
        printf("\n%d\t *\t%d\t=\t%d ",n,i,n*i);
        i++;
    }

}