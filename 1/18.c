#include <stdio.h>

#define STOP 0
#define START 1

int main()
{
    int c;
    int lineLen = 0;
    short mode = STOP;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            if (lineLen)
            {
                printf("\n");
            }

            mode = STOP;
            lineLen = 0;
            continue;
        }

        if (mode == STOP && c != ' ' && c != '\t')
        {
            mode = START;
        }

        if (mode == START)
        {
            lineLen++;
            printf("%c", c);
        }
    }

    return 0;
}
