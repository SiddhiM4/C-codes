#include<stdio.h>
#include<stdlib.h>
int main()
{
    int ch,n,i,x,sum=0,result,reverse,temp,r,cnt,base,power;
    printf("\n1. Prime\n2. Perfect\n3. Factorial\n4. Factors\n5. Palindrome\n6. Armstrong\n7. Neon\n8. Power\n9. Reverse\n10. EXIT\n Enter your choice:");
    scanf("%d",&ch);

    printf("\nEnter number:");
    scanf("%d",&n);

    do
    {
        switch (ch)
        {
        case 1://prime numbers
            i=2;
            x=1;
            while(i<=n/2)
            {
                
                if(n%i==0)
                {
                    x=0;
                    break;
                }
                i++;
            }
            if(x==1)
            {
                printf("\n%d is a prime number.",n);
            }
            else
            {
                printf("\n%d is not a prime number",n);
            }

            break;
        case 2://perfect number
        printf("\nFactors of %d are\n",n);
        i=1;
        while(i<=n/2)
        {
            if(n%i==0)
            {
                printf("\n%d",i);
                sum+=i;
            }
            i++;
        }
    
        printf("\nSum=%d",sum);
        if(sum==n)
        {
            printf("\nIt is a perfect number");
        }
        else 
        {
            printf("\nNot a perfect number");
        }
        break;
        
        case 3://factorial
        result=1;
        i=2;
        while(i<=n)
        {
            result=result*i;
            i++;
        }
        printf("\nFactorial of %d = %d",n,result);
            break;

        case 4://factors
        printf("\nFactors of %d are\n",n);
        i=2;
        while(i<=n/2)
        {
            if(n%i==0)
            {
                printf("\n%d",i);
            }
            i++;
        }
        break;

        case 5://palindrome
        reverse=0;
        sum=0;
        temp=n;
        while(n!=0)
        {
            r=n%10;
            sum=sum+r;
            reverse=reverse*10+r;
            n=n/10;
        }
        printf("\nReverse no=%d",reverse);
        if(temp==reverse)
        {
            printf("\nIt is a palindrome");
        }
        else 
        {
            printf("\nIt is not a palindrome");
        }
        break;

        case 6://armstrong
        cnt=0;
        temp=n;
        while(n!=0)
        {
            n=n/10;
            cnt++;
        }
        n=temp;
        while(n!=0)
        {
            r=n%10;
            i=1;
            result=1;
            while(i<=cnt)
            {
                result=result*r;
                i++;
            }
            sum=sum+result;
            n=n/10;
        }
        if(sum==temp)
        {
            printf("\n%d = %d",temp,sum);
            printf("\nIt is armstrong number");
        }
        else
        {
            printf("\n%d != %d",temp,sum);
            printf("\nNot a armstrong number");
        }
            break;

            case 7://neon
            temp = n*n;
            result = 0;
            while(temp>0)
            {
                r=temp%10;
                result=result+r;
                temp/=10;
            }
            if(result==n)
            {
                printf("\nNeon number");
            }
            else
            {
                printf("\nNot a neon number");
            }
            break;

            case 8://power
            printf("Enter base and power:");
            scanf("%d%d",&base,&power);

            result=1;
            i=1;
            while(i<=power)
            {
                result=result*base;
                i++;
            }
            printf("\nbase %d & power %d = %d",base,power,result);

            break;

            case 9://reverse
            reverse=0;
            while(n!=0)
            {
                r=n%10;
                reverse=reverse*10+r;
                n=n/10;
            }
            printf("\nReverse number:%d",reverse);

            break;
            case 10: printf("\nThank You");
            break;

            default:
            printf("\nInvalid choice!");
            break;
        }
    } 
    while (ch=0);
    
}