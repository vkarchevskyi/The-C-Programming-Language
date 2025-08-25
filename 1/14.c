#include <stdio.h>

// All chars from ASCII except first 31 system characters
#define LEN 127 - 32
#define START_INDEX 32

#define BLOCK_CHARACTER "█"

int main()
{
    int c;
    int state = 0;
    int length = 0;
    int lengths[LEN];

    for (int i = 0; i < LEN; i++)
    {
        lengths[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        lengths[c - START_INDEX]++;
    }

    // Horizontal histogram
    for (int i = 0; i < LEN; i++)
    {
        printf("Len = %c: ", i + START_INDEX);
        for (int j = 0; j < lengths[i]; j++)
        {
            printf(BLOCK_CHARACTER);
        }
        printf("\n");
    }

    // Vertical histogram
    printf("\n\n");
    for (int i = 0; i < LEN; i++)
    {
        for (int j = 0; j < LEN; j++)
        {
            if (lengths[j] >= LEN - i)
            {
                printf(BLOCK_CHARACTER);
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    for (int i = 0; i < LEN; i++)
    {
        printf("%c", i + START_INDEX);
    }

    printf("\n");

    return 0;
}