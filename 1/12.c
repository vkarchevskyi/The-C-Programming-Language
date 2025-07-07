#include <stdio.h>

int main()
{
    int c;
    int previousCharWasNewLine = 0;
    int specialCharacter = 0;

    while ((c = getchar()) != EOF)
    {
        specialCharacter = c == '\n' || c == ' ' || c == '\t';

        if (specialCharacter && !previousCharWasNewLine)
        {
            printf("\n");
            previousCharWasNewLine = 1;
        }
        else if (!specialCharacter)
        {
            printf("%c", c);
            previousCharWasNewLine = 0;
        }
    }

    return 0;
}