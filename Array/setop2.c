#include<stdio.h>
int main()
{
    int set1[20];
    int set2[20];
    int setuni[20],setinter[20];
    int n1,n2,i,ch,j,k,x;

    do
    {
        printf("\n1.Create\n2.Display\n3.Union\n4.Insersection\nEnter your choice-");
        scanf("%d",&ch);

        switch (ch)
        {
        case 1://create
            printf("\nEnter N for set1 elements:");
            scanf("%d",&n1);

            printf("\nEnter elements for n1\n");
            for(i=0;i<n1;i++)
            {
                scanf("%d",&set1[i]);
            }

            printf("\nEnter N for set2 elements:");
            scanf("%d",&n2);
            printf("\nEnter elements for n2\n");
            for(i=0;i<n2;i++)
            {
                scanf("%d",&set2[i]);
            }
                    break;
                
            case 2://display
                printf("\nSet1\n");
                for ( i = 0; i < n1; i++)
                    printf("%d\t",set1[i]);
                printf("\nSet2\n");
                for ( i = 0; i < n2; i++)
                    printf("%d\t",set2[i]);
                    break;
                
            case 3://union
            k=0;
            for(i=0;i<n1;i++)
            {
                setuni[k]=set1[i];
                k++;    
            }
            for(j=0;j<n2;j++)
            {
                x=1;
                {
                    for(i=0;i<n1;i++)
                    {
                        if(set2[j]==set1[i])
                        {
                            x=0;
                            break;
                        }
                    }
                    if(x==1)
                    {
                        setuni[k]=set2[j];
                        k++;
                    }
                }
                printf("\n--------------------SET UNION-------------------");
                for(i=0;i<k;i++)
                {
                    printf("\n%d",setuni[i]);
                }
            }
            
            break;
        } 
    }
    while (ch!=0);
    
}