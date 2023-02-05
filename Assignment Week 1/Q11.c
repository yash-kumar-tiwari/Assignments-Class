// check number is palindrome or not

#include <stdio.h>
int main()
{
    int number, temp, remainder, reverse = 0;

    printf("Enter Number to Check: ");
    scanf("%d", &number);

    temp = number;

    while (temp > 0) //------>condition
    {
        remainder = temp % 10;
        reverse = (reverse * 10) + remainder;
        temp = temp / 10;
    }
    if (reverse == number)
    {
        printf("-------------------------------------------\n");
        printf("Palindrome\n");
    }
    else
    {
        printf("-------------------------------------------\n");
        printf("Not a Palindrome\n");
    }
    return 0;
}