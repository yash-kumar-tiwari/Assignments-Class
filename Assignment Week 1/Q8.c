// calculate celsius to fahrenheit temperature

#include <stdio.h>
int main()
{
    float celsius, fahrenheit;

    printf("Enter Temperature in Celsius to Convert : ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;
    // fahrenheit = ((celsius * 9)/5) + 32;
    // fahrenheit = ((9/5) * celsius) + 32;
    // fahrenheit = ((1.8 * celsius) + 32;

    printf("--------------------------------------------\n");
    printf("Temperature in Fahrenheit (%.2f Celsius) : %.2f", celsius, fahrenheit);
}