// fibonacci

#include <stdio.h>
int main()
{
    int f1 = 0, f2 = 1, f3, i, num;

    printf("Enter Number: ");
    scanf("%d", &num);

    printf("%d\t%d\t", f1, f2);

    for (i = 3; i <= num; i++)
    {
        f3 = f1 + f2;
        printf("%d\t", f3);
        f1 = f2;
        f2 = f3;
    }
    return 0;
}