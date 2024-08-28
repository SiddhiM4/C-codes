#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    int *ptr=&arr[0];
    int i,sum=0;

    printf("\n%d : %u",*ptr,ptr);
    printf("\n%d : %u",*(ptr+1),(ptr+1));
    printf("\n%d : %u",*(ptr+2),(ptr+2));
    printf("\n%d : %u",*(ptr+3),(ptr+3));
    printf("\n%d : %u",*(ptr+4),(ptr+4));
    

    for(i=0;i<5;i++)
    {
        printf("\n%d ---> %u",*(ptr+i),(ptr+i));
    }
    //sum
    for(i=0;i<5;i++)
        sum=sum+*(ptr+i);
    printf("\nSum=%d",sum);

    //reverse
    for(i=5;i<0;i--)
        printf("\n%d ---> %u",*(ptr+i),(ptr+i));

    return 0;
}