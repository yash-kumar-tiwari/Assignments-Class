// calculate area of different shapes based on user choice

#include <stdio.h>
int main()
{
    char choice;
    float side, length, breadth, radius, pi = 3.14, area;
    printf("Enter S for Square: \n");
    printf("Enter C for Circle: \n");
    printf("Enter R for Rectangle: \n");
    printf("Enter Choice: ");
    scanf("%c", &choice);
    switch (choice)
    {
    case 'S':
    {
        printf("\nEnter Side of Square: ");
        scanf("%f", &side);
        area = side * side;
        printf("Area of Square of side %.2f is %.2f", side, area);
    }
    break;

    case 'R':
    {
        printf("\nEnter Length of Rectangle: ");
        scanf("%f", &length);
        printf("\nEnter Breadth of Rectangle: ");
        scanf("%f", &breadth);
        area = length * breadth;
        printf("Area of Rectangle of %.2f Length and %.2f Breadth is %.2f", length, breadth, area);
    }
    break;

    case 'C':
    {
        printf("\nEnter Radius of Circle: ");
        scanf("%f", &radius);
        area = pi * radius * radius;
        printf("Area of Circle of %.2f Radius is %.2f", radius, area);
    }
    break;

    default:
        printf("Please Enter Valid Choice from (S,R,C)");

        break;
    }
}