// calculate area of different shapes based on user choice
#include <stdio.h>
int main()
{
    char choice;
    float side, length, breadth, radius, pi = 3.14, area;
    printf("----Area Calculator for Different Shapes----\n\n");
    printf("Enter S/s for Square: \n");
    printf("Enter C/c for Circle: \n");
    printf("Enter R/r for Rectangle: \n");
    printf("-------------------------------------\n");
    printf("Enter Your Choice: ");
    scanf("%c", &choice);
    switch (choice)
    {
    case 'S':
    {
        printf("-----Area of Square-----");
        printf("\nEnter Side of Square: ");
        scanf("%f", &side);
        area = side * side;
        printf("Area of Square of side %.2f is %.2f", side, area);
    }
    break;
    case 's':
    {
        printf("-----Area of Square-----");
        printf("\nEnter Side of Square: ");
        scanf("%f", &side);
        area = side * side;
        printf("Area of Square of side %.2f is %.2f", side, area);
    }
    break;
    case 'R':
    {
        printf("-----Area of Rectangle-----");
        printf("\nEnter Length of Rectangle: ");
        scanf("%f", &length);
        printf("\nEnter Breadth of Rectangle: ");
        scanf("%f", &breadth);
        area = length * breadth;
        printf("Area of Rectangle of %.2f Length and %.2f Breadth is %.2f", length, breadth, area);
    }
    break;
    case 'r':
    {
        printf("-----Area of Rectangle-----");
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
        printf("-----Area of Circle-----");
        printf("\nEnter Radius of Circle: ");
        scanf("%f", &radius);
        area = pi * radius * radius;
        printf("Area of Circle of %.2f Radius is %.2f", radius, area);
    }
    break;
    case 'c':
    {
        printf("-----Area of Circle-----");
        printf("\nEnter Radius of Circle: ");
        scanf("%f", &radius);
        area = pi * radius * radius;
        printf("Area of Circle of %.2f Radius is %.2f", radius, area);
    }
    break;
    default:
            printf("Please Enter Valid Choice from (S/s,R/r,C/c)");
        break;
    }
}