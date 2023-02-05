// check four digit number and sum first and last digit of that number

#include <stdio.h>
int main()
{
    int num, first, last, sum;

    printf("Enter Four Digit Number : ");
    scanf("%d", &num);

    if (num >= 1000 && num <= 9999)
    {
        last = num % 10;
        first = num / 1000;

        sum = first + last;

        printf("-------------------------------------------\n");
        printf("The Sum of First and Last Digit of %d is : %d", num, sum);
    }
    else
    {
        printf("Please Enter Valid 4 Digit Number.");
    }
}