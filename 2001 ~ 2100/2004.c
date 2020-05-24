#include <stdio.h>

int main()
{
    int h1 = 0, w1 = 0, h2 = 0, w2 = 0;
    scanf("%d %d", &h1, &w1);
    scanf("%d %d", &h2, &w2);

    for (int i = 0; i < h1 * h2; i++)
    {
        for (int j = 0; j < w1 * w2; j++)
        {
            printf("%c", (i / h2) % 2 ^ (j / w2) % 2 ? '.' : 'X');
        }
        printf("\n");
    }

    return 0;
}