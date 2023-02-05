// swap value using third variable

#include <stdio.h>
int main()
{
    int a, b, temp;

    printf("Enter Value of A: ");
    scanf("%d", &a);

    printf("Enter Value of B: ");
    scanf("%d", &b);

    printf("\n----Values Before Swapping----\nA : %d\nB : %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("\n----Values After Swapping----\nA : %d\nB : %d\n", a, b);
}