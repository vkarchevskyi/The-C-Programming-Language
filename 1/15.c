#include <stdio.h>

float calculateFahr(float celsius);

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = -20;
    upper = 50;
    step = 5;
    celsius = lower;

    printf("The table of Celsius temperatures and their Fahrenheit equivalents:\n");

    while (celsius <= upper)
    {
        fahr = calculateFahr(celsius);
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius += step;
    }

    return 0;
}

float calculateFahr(float celsius)
{
    return 9.0 * celsius / 5.0 + 32;
}