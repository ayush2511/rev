#include <stdio.h>
#include <math.h>
int main()
{
    float principal,rate,time,si,ci;
    printf("Enter the principal: ");
    scanf("%f", &principal);
    printf("Enter the rate: ");
    scanf("%f", &rate);
    printf("Enter the time");
    scanf("%f", &time);
    si = (principal*rate*time)/100;
    printf("Simple Interest = %f", si);
    ci = principal*(pow((1 + rate / 100), time) - 1);
    printf("Compound Interest = %f\n", ci);
    
    return 0;
}