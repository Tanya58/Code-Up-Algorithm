#include <stdio.h>

int main()
{
    int n = 0;
    int x = 0, y = 0;
    char checkerboard[19][19] = {0};

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        checkerboard[x - 1][y - 1] = 1;
    }

    for (int i = 0; i < 19; i++)
    {
        for (int j = 0; j < 19; j++)
        {
            printf("%d ", checkerboard[i][j]);
        }
        printf("\n");
    }

    return 0;
}