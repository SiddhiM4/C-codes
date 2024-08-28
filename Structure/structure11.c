#include<stdio.h>
struct account{
    int accno,balance;
    char name[100],type[100];
};

int main()
{
    struct account a[5];
    int i,n;
    printf("\nEnter N:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter account number:");
        scanf("%d",&a[i].accno);
        printf("\nEnter account name:");
        scanf("%s",&a[i].name);
        printf("\nEnter account type:");
        scanf("%s",&a[i].type);
        printf("\nEnter account balance:");
        scanf("%d",&a[i].balance);
    }

    printf("\n%d Account details\n",n);
    ("\n-------------------------------------------");
    for(i=0;i<n;i++)
    {
        printf("\nAccount Number\t | \t%d",a[i].accno);
        printf("\nAccount Name\t | \t%s",a[i].name);
        printf("\nAccount Type\t | \t%s",a[i].type);
        printf("\nAccount balance\t | \t%d",a[i].balance);
        printf("\n------------------------------------------------");
    }
}