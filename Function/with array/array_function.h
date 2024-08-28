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
void maxmin(int a,int b)
{
    if(a>b)
        printf("\nmax=%d\tmin=%d",a,b);
    else 
        printf("\nmax=%d\tmin=%d",b,a);
}
void sort(int a[100],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i] > a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
}