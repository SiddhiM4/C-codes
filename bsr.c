#include<stdio.h>
int main()
{
    int balls,runs;
    float bsr;
    
    printf("Enter runs scored:");
    scanf("%d",&runs);
    printf("\nEnter balls faced:");
    scanf("%d",&balls);

    bsr=((float)runs*100)/balls;

    printf("\n BATTING STRIKE RATE = %.2f",bsr);
    return 0;
}