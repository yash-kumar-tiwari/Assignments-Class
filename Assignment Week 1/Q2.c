// calculate square of given number

#include <stdio.h>
#include <math.h>
int main()
{
    int num, square;

    printf("Enter Number : ");
    scanf("%d", &num);

    square = pow(num, 2);
    printf("-------------------------------\n");
    printf("Square of %d is %d\n", num, square);

    return 0;
}