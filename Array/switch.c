//create display search sort insert new value delete value
#include<stdio.h>
#define max 20
int main()
{
    int ch,i,j,a[max],n,key,flag,temp,newvalue,loc,delete;

    do
    {
        printf("\n1.Create\n2.Display\n3.Search\n4.Sort\n5.Insert new value\n6.Delete value\n7.Exit");
        printf("\nEnter your choice-");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1://create
            printf("How many numbers you want to enter:");
            scanf("%d",&n);

            printf("\nEnter %d numbers:",n);
            for(i=0;i<n;i++)
                scanf("%d",&a[i]);
            break;
            
            case 2://display

            printf("\nArray is:\n");
            for(i=0;i<n;i++)
                printf("%d\t",a[i]);
            break;

            case 3://search
            printf("\nEnter key to search:");
            scanf("%d",&key);

            flag=1;
            for(i=0;i<n;i++)
            {
                if(key==a[i])
                {
                    printf("\nNumber is found!");
                    flag=0;
                    break;
                }
            }
            if(flag)
                printf("Number not found!");
            break;

            case 4:
            printf("\nUnsorted numbers are:\n");
            for(i=0;i<n;i++)
                printf("%d\t",a[i]);

            //sorting
            for(i=0;i<n;i++)
            {
                for(j=i+1;j<n;j++)
                {
                    if(a[i] > a[j])
                    {
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
                }
            }
            printf("\nSorted elements\n");
            for(i=0;i<n;i++)
                printf("%d\t",a[i]);
            break;
            
            case 5://insert value
            printf("\nEnter Value & loc to insert:");
            scanf("%d%d",&newvalue,&loc);
            for(i=n-1;i>=loc-1;i--)
            {
                a[i+1]=a[i];
            }
            a[loc-1]=newvalue;
            n++;
            printf("\nValue Inserted!");
            break;

            case 6://delete value
            printf("Enter value to delete:");
            scanf("%d",&key);
            for(i=0;i<n-1;i++)
            {
                if(a[i]==key)
                a[i]=a[i+1];
            }
            n--;
            printf("\nValue deleted!");
            break;
            case 7:
            printf("\nInvalid choice!");
            break;
        }
    } while (ch!=8);
    
}