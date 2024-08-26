#include <stdio.h>

int main()
{
    int c;
    int r;

    while ((c = getchar()) != EOF)
    {
        r = (c != EOF);
        printf("%d\n", r);
    }

    r = (c != EOF);
    printf("%d\n", r);

    return 0;
}