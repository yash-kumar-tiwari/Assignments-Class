// factorial

#include <stdio.h>
int main()
{
    int i, factorial = 1, number;

    printf("Enter Number: ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++)
    {
        factorial = factorial * i;
    }
    printf("Factorial of %d is %d.", number, factorial);
}