#include <stdio.h>

int main()
{
    int c;
    int previousCharWasSpace = 0;

    while ((c = getchar()) != EOF)
    {
        if (!(c == ' ' && previousCharWasSpace))
        {
            putchar(c);
        }
        previousCharWasSpace = c == ' ';
    }

    return 0;
}
