//sum of digits of a number

#include <stdio.h>
int main()
{
    int num, rem, sum = 0,temp;
    printf("Enter the number : ");
    scanf("%d", &num);
    temp=num;

    while (num > 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }

    printf("Sum of All Digits of %d is %d", temp, sum);

    return 0;
}
