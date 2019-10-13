#include <stdio.h>
#define MAX 100

int main()
{
    int h = 0, w = 0, n = 0, l = 0, d = 0;
    int x = 0, y = 0;
    char grid[MAX][MAX] = {0};

    scanf("%d %d", &h, &w);
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d %d", &l, &d, &x, &y);

        for (int j = 0; j < l; j++)
        {
            if (d)
                grid[x - 1 + j][y - 1] = 1;
            else
                grid[x - 1][y - 1 + j] = 1;
        }
    }

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }

    return 0;
}