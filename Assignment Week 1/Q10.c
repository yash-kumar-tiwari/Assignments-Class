// calculate gross and net salary and its related components
#include <stdio.h>

int main()
{
    float gross, net, basic, ta, da, pf;

    printf("Enter Basic Salary of Employee : ");
    scanf("%f", &basic);

    ta = basic / 10;
    da = 500;
    pf = (basic * 7.8) / 100;
    gross = basic + ta + da;
    net = gross - pf;
    
    printf("\nPayslip of the Employee is classified as follows\n");
    printf("-------------------------------------------\n");
    printf("Basic Salary: %.2f\n", basic);
    printf("Travel Allowance: %.2f\n", ta);
    printf("Dearness Allowance: %.2f\n", da);
    printf("-------------------------------------------\n");
    printf("Gross Salary: %.2f\n", gross);
    printf("-------------------------------------------\n");
    printf("Deductions:\nProvident Fund: %.2f\n", pf);
    printf("-------------------------------------------\n");
    printf("Net Salary: %.2f\n", net);
}