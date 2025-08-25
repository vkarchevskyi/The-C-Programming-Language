#include <stdio.h>

#define MAXLENGTH 1000

int getLine(char line[], int maxlength);
void reverse(char original[], char result[], int len);

int main()
{
    int len;
    char line[MAXLENGTH];
    char reversedLine[MAXLENGTH];

    while ((len = getLine(line, MAXLENGTH)) > 0)
    {
        reverse(line, reversedLine, len);
        printf("%s", reversedLine);
    }

    return 0;
}

int getLine(char s[], int lim)
{
    int c;
    int i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;
    }
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void reverse(char original[], char result[], int len)
{
    int i;

    for (i = 0; i < len; i++)
    {
        result[i] = original[len - i - 1];
    }

    result[i] = '\0';
}
