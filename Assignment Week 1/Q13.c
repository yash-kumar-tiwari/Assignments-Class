// check whether it is leap year or not

#include <stdio.h>
int main()
{
    int year;

    printf("Enter Year: ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("-------------------------------------------\n");
                printf("%d is a Leap Year.", year);
            }
            else
            {
                printf("-------------------------------------------\n");
                printf("%d is Not a Leap Year.", year);
            }
        }
        else
        {
            printf("-------------------------------------------\n");
            printf("%d is a Leap Year.", year);
        }
    }
    else
    {
        printf("-------------------------------------------\n");
        printf("%d is Not a Leap Year.", year);
    }
}