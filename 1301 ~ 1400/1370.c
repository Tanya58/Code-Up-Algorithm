#include <stdio.h>

int main()
{
    int h = 0, r = 0;
    scanf("%d %d", &h, &r);

    while (r--)
    {
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < i; j++)
            {
                printf(" ");
            }
            printf("*\n");
        }
        for (int i = h - 2; i >= 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                printf(" ");
            }
            printf("*\n");
        }
    }
    return 0;
}