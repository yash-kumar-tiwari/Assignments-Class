// area of simple interest

#include <stdio.h>
int main()
{
    float principal, rate, time, si, amount;

    printf("Enter Principal : ");
    scanf("%f", &principal);

    printf("Enter Rate : ");
    scanf("%f", &rate);

    printf("Enter Time : ");
    scanf("%f", &time);

    si = (principal * rate * time) / 100;
    amount = principal + si;

    printf("---------------------------------------------\n");
    printf("Simple interest is %.2f for Principal Amount %.2f for %.f years at the Rate of %.2f ppa.\n", si, principal, time, rate);
    printf("Total Amount to be Paid is %.2f.", amount);
}