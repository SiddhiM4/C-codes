#include<stdio.h>
#include "array_function.h"

int main()
{
    int n,m,p,ch,a[100];

    do
    {
        printf("\n1.Max & Min\n2.Sort");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1://max min
        printf("\nEnter 2 nos:");
        scanf("%d%d",&n,&m);
        maxmin(n,m);
            break;

        case 2:
        printf("\nHow many nos:");
        scanf("%d",&p);
        accept(a,p);
        sort(a,p);
        display(a,p);
        break;
        
        default:
            break;
        }
    } while (ch!=0);
    
}