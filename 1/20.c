#include <stdio.h>

#define MAXLENGTH 1000
#define TABSIZE 8

int len;
char buffer[MAXLENGTH];

void detab(int n);

int main()
{
    int c;
    extern int len;
    extern char buffer[];

    for (len = 0; len < MAXLENGTH - 1 && ((c = getchar()) != EOF); len++)
    {
        buffer[len] = c;
    }
    buffer[len++] = '\0';

    printf("%s\n", buffer);
    detab(TABSIZE);
    printf("%s\n", buffer);

    return 0;
}

// It's better to pass n as an argument to make function more portable
void detab(int n)
{
    int spaceCount;

    for (int i = 0, lastNewLineChar = 0; buffer[i] != '\0'; i++)
    {
        if (buffer[i] == '\n')
        {
            lastNewLineChar = i + 1;
        }
        if (buffer[i] != '\t')
        {
            continue;
        }

        spaceCount = n - ((i - lastNewLineChar) % n);

        for (int j = len + spaceCount; j > i + spaceCount; j--)
        {
            buffer[j - 1] = buffer[j - spaceCount];
        }
        for (int j = 0; j < spaceCount; j++)
        {
            buffer[i + j] = ' ';
        }

        len += spaceCount;
    }
}
