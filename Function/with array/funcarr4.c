//sorting
#include<stdio.h>
void accept(int a[100],int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}
void display(int a[100],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
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
int main()
{
    int n,a[100];

    printf("\nEnter N:");
    scanf("%d",&n);

    accept(a,n);
    sort(a,n);
    display(a,n);
    
}