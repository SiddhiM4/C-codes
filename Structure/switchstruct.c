#include<stdio.h>
struct account{
    int accno,balance;
    char name[100],type[100];
};
int main()
{
    struct account a[100];
    int i,n,ch,key,deposit,withdraw,money;
    printf("\nEnter N:");
    scanf("%d",&n);
    do
    {
        printf("\n1.Create\n2.Display\n3.Search\n0.Exit");
        printf("\nEnter your choice:");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1://create
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

        break;
        
        case 2://display
        for(i=0;i<n;i++)
        {
            printf("\nAccount Number\t | \t%d",a[i].accno);
            printf("\nAccount Name\t | \t%s",a[i].name);
            printf("\nAccount Type\t | \t%s",a[i].type);
            printf("\nAccount balance\t | \t%d",a[i].balance);
            printf("\n------------------------------------------------");
        }
        break;

        case 3://search
        printf("\nEnter Account number to search: ");
        scanf("%d", &key);
        for (i = 0; i < n; i++)
        {
            if (a[i].accno == key)
            {
                printf("\nAccount Number\t | \t%d", a[i].accno);
                printf("\nAccount Name\t | \t%s", a[i].name);
                printf("\nAccount Type\t | \t%s", a[i].type);
                printf("\nAccount Balance\t | \t%d", a[i].balance);

                printf("\nWould you like to withdraw (press 1) or deposit money (press 0): ");
                scanf("%d", &money);
                if (money == 1)
                {
                    printf("\nEnter amount to withdraw: ");
                    scanf("%d", &withdraw);
                    if (withdraw <= a[i].balance)
                    {
                        a[i].balance -= withdraw;
                        printf("\nRemaining Balance = %d", a[i].balance);
                    }
                    else
                    {
                        printf("\nInsufficient Balance!");
                    }
                }
                else if (money == 0)
                {
                    printf("\nEnter amount to deposit: ");
                    scanf("%d", &deposit);
                    a[i].balance += deposit;
                    printf("\nUpdated Balance = %d", a[i].balance);
                }
                break;
            }
        }
        if (i == n)
        {
            printf("\nAccount number not found!");
        }
        break;
        
        default:
         if (ch = 0)
            {
                printf("\nInvalid choice! Please try again.");
            }
            break;
        }
    } 
    while (ch=0);
}