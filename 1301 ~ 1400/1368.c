#include <stdio.h>

int main()
{
    int h = 0, k = 0;
    char d = 0;
    scanf("%d %d %c", &h, &k, &d);

    for (int i = 0; i < h; i++)
    {
        if (d == 'L')
        {
            for (int j = 0; j < i; j++)
            {
                printf(" ");
            }
        }
        else if (d == 'R')
        {
            for (int j = 0; j < h - i - 1; j++)
            {
                printf(" ");
            }
        }
        for (int j = 0; j < k; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}