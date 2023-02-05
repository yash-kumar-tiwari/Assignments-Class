// swap value using without third variable

#include <stdio.h>
int main()
{
    int a, b;

    printf("Enter Value of A: ");
    scanf("%d", &a);

    printf("Enter Value of B: ");
    scanf("%d", &b);

    printf("\n----Values Before Swapping----\nA : %d\nB : %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\n----Values After Swapping----\nA : %d\nB : %d\n", a, b);
}