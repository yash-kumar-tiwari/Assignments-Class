// table

#include <stdio.h>
int main()
{
    int i, number;

    printf("Enter Number to Print Table: ");
    scanf("%d", &number);

    printf("----Table of %d is as Follows----\n\n", number);
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    return 0;
}