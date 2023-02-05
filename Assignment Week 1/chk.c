// #include <stdio.h>
// int main()
// {
//     int year;
//     printf("Enter a year: ");
//     scanf("%d", &year);

//     // leap year if perfectly divisible by 400
//     if (year % 400 == 0)
//     {
//         printf("%d is a leap year.", year);
//     }
//     // not a leap year if divisible by 100
//     // but not divisible by 400
//     else if (year % 100 == 0)
//     {
//         printf("%d is not a leap year.", year);
//     }
//     // leap year if not divisible by 100
//     // but divisible by 4
//     else if (year % 4 == 0)
//     {
//         printf("%d is a leap year.", year);
//     }
//     // all other years are not leap years
//     else
//     {
//         printf("%d is not a leap year.", year);
//     }

//     return 0;
// }

// area of triangle

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     float sidea, sideb, sidec, peri, semi, area;

//     printf("Enter Side A : ");
//     scanf("%f", &sidea);

//     printf("Enter Side B : ");
//     scanf("%f", &sideb);

//     printf("Enter Side C : ");
//     scanf("%f", &sidec);

//     peri = sidea + sideb + sidec;
//     semi = (sidea + sideb + sidec) / 2;
//     area = sqrt(semi * (semi - sidea) * (semi - sideb) * (semi - sidec));

//     printf("---------------------------\n");
//     printf("Perimeter of Triangle : %.2f\n", peri);
//     printf("Semi Perimeter of Triangle : %.2f\n", semi);
//     printf("Area of Triangle : %.2f\n", area);
// }

// check whether it is leap year or not

#include <stdio.h>
int main()
{
    int year;

    printf("Enter Year: ");
    scanf("%d", &year);

    if (year % 4 == 0 && year % 100 == 0)
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
