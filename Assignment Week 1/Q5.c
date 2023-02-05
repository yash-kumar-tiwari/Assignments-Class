// area of triangle

#include <stdio.h>
int main()
{
    float base, height, area;

    printf("Enter Base : ");
    scanf("%f", &base);

    printf("Enter Height : ");
    scanf("%f", &height);

    area = (base * height) / 2;
    printf("---------------------------\n");
    printf("Area of Triangle : %.2f", area);
}