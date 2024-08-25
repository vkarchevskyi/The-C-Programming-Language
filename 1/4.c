#include <stdio.h>

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
        fahr = 9.0 * celsius / 5.0 + 32;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius += step;
    }

    return 0;
}