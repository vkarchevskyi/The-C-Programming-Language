#include <stdio.h>

int main()
{
    int c;
    int spaces = 0;
    int tabs = 0;
    int endLines = 0;

    while ((c = getchar()) != EOF)
    {
        switch (c)
        {
        case '\t':
            tabs++;
            break;
        case '\n':
            endLines++;
            break;
        case ' ':
            spaces++;
            break;
        default:
            break;
        }
    }

    printf("Spaces: %d\nTabs: %d\nEnd of lines: %d\n", spaces, tabs, endLines);

    return 0;
}
