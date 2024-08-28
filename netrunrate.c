#include<stdio.h>
int main()
{
    int runs,overs;//runs scored and balls faced
    int oppruns,oppovers;//total runs and balls scored and bowled respectively
    float nrr;//net run rate

    printf("\nEnter total runs scored-");
    scanf("%d",&runs);
    printf("\nEnter balls faced-");
    scanf("%d",&overs);

    //opposing team details
    printf("\nRuns scored by opposing team-");
    scanf("%d",&oppruns);
    printf("\nBalls faced by opposing team-");
    scanf("%d",&oppovers);

    //nrr calculations
    nrr=((float)runs/overs)-((float)oppruns/oppovers);

    printf("NET RUN RATE=%.2f",nrr);
    return 0;
}