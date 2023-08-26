Simple Interest Calculator
#include<stdio.h>
 int main()
 {
    float principal, rate, time, interest;
    // Input principal amount
    printf("Enter principal amount");
    scanf("%f", &principal);

    //Input rate of Interest
    printf("Enter rate of interest(in percentage please): ");
    scanf("%f", &rate)

    //Input time period in years
    printf("Enter time period(in years please): ")
    scanf("%f", &time)

    //calculate simple interest
    interest = (principal*rate*time)/100;

    //Display ther result
    printf("Simple Interest = %f\n",interest);

    return 0;

     }