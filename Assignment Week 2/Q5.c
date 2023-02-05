//sum of series

#include <stdio.h>
int main()
{
    int num, i;
    float sum = 0.0;

    printf("Enter the limit (n Value): ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        //sum+=(1.0/i);
        sum = sum + 1.0 / i;
    }

    printf("Sum = %f\n", sum);

    return 0;
}