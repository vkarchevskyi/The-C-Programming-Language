#include <stdio.h>

#define IN 1
#define OUT 0

#define LEN 32

#define BLOCK_CHARACTER "█"

int main()
{
    int c;
    int state = OUT;
    int length = 0;
    int lengths[LEN];

    for (int i = 0; i < LEN; i++)
    {
        lengths[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c == '\n' || c == ' ' || c == '\t')
        {
            state = OUT;
            if (length > 0)
            {
                lengths[length - 1]++;
                length = 0;
            }
        }
        else if (state == OUT)
        {
            state = IN;
            length++;
        }
        else
        {
            length++;
        }
    }

    // Horizontal histogram
    for (int i = 0; i < LEN; i++)
    {
        printf("Len = %2d: ", i + 1);
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

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < LEN; j++)
        {
            switch (i)
            {
            case 0:
                printf("L");
                break;
            case 1:
                printf("e");
                break;
            case 2:
                printf("n");
                break;
            case 3:
                printf("%d", (j + 1) / 10);
                break;
            case 4:
                printf("%d", (j + 1) % 10);
                break;
            default:
                break;
            }
        }

        printf("\n");
    }

    return 0;
}