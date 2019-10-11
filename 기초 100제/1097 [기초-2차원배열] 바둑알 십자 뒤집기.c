#include <stdio.h>
#define MAX 19

int main()
{
    int n = 0;
    int x = 0, y = 0;
    int checkerboard[MAX][MAX] = {0};

    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX - 1; j++)
        {
            scanf("%d ", &checkerboard[i][j]);
        }
        scanf("%d", &checkerboard[i][MAX - 1]);
    }

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        for (int j = 0; j < MAX; j++)
        {
            if (checkerboard[x - 1][j])
                checkerboard[x - 1][j] = 0;
            else
                checkerboard[x - 1][j] = 1;
        }
        for (int j = 0; j < MAX; j++)
        {
            if (checkerboard[j][y - 1])
                checkerboard[j][y - 1] = 0;
            else
                checkerboard[j][y - 1] = 1;
        }
    }

    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            printf("%d ", checkerboard[i][j]);
        }
        printf("\n");
    }

    return 0;
}