#include<stdio.h>
void accept(int p[100],int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);
}
void display(int p[100],int n)
{
     int i;
    for(i=0;i<n;i++)
        printf("%d\t",p[i]);
}
int main()
{
    int n,a[100];
    printf("\nHow many numbers:");
    scanf("%d",&n);

    accept(a,n);

    printf("\nGiven data\n");
    display(a,n);
    
}