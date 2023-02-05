// area of circle

#include <stdio.h>
int main()
{
    float PI = 3.14, radius, area;

    printf("Enter Radius : ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("-------------------------\n");
    printf("Area of Circle : %.2f", area);
}