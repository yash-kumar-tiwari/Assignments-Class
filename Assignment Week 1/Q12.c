// check number whether it is armstrong not

#include <stdio.h>
#include <math.h>
int main()
{
    int number, temp, count = 0, remainder, ans = 0;

    printf("Enter Number to Check: ");
    scanf("%d", &number);

    temp = number;

    while (temp != 0)
    {
        temp = temp / 10;
        count++;
    }

    temp = number;

    while (temp != 0)
    {
        remainder = temp % 10;
        ans = ans + pow(remainder, count);
        temp = temp / 10;
    }

    if (ans == number)
    {
        printf("-------------------------------------------\n");
        printf("Number is Armstrong\n");
    }
    else
    {
        printf("-------------------------------------------\n");
        printf("Not Armstrong Number\n");
    }
    return 0;
}