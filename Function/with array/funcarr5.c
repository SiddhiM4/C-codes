#include<stdio.h>
void swap(int *x,int *y)
{
    int temp = *x;
    *x=*y;
    *y=temp;

}
int main()
{
    int a,b;

    printf("\nEnter any two nos:");
    scanf("%d%d",&a,&b);

    printf("\nBefore swapping:\n%d\t%d",a,b);
    swap(&a,&b);
    printf("\nAfter swapping:\n%d\t%d",a,b);
}