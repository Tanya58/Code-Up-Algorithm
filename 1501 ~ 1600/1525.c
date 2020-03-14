#include <stdio.h>

int direction[4][2] = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};

int map[10][10];

void pop(int x, int y)
{
    for (int d = 0; d < 4; d++)
    {
        for (int len = 1; len <= map[x][y]; len++)
        {
            int tx = x + direction[d][0] * len;
            int ty = y + direction[d][1] * len;

            if (tx < 0 || ty < 0 || tx >= 10 || ty >= 10 || map[tx][ty] > 0)
            {
                continue;
            }
            if (map[tx][ty] == -1)
            {
                break;
            }

            map[tx][ty] = -2;
        }
    }
    map[x][y] = -2;
}

int main()
{
    // set map
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            scanf("%d", &map[i][j]);
        }
    }

    // pop water balloons
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (map[i][j] > 0)
            {
                pop(i, j);
            }
        }
    }

    int n = 0;
    scanf("%d", &n);

    int x = 0, y = 0;
    int player[7] = {0}; // 0 : alive, 1 : dead
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        if (map[x - 1][y - 1] == -2)
        {
            player[i] = 1;
        }
        else
        {
            map[x - 1][y - 1] = i + 1;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", map[i][j]);
        }
        printf("\n");
    }

    printf("Character Information\n");
    for (int i = 0; i < n; i++)
    {
        printf("player %d %s\n", i + 1, player[i] ? "dead" : "survive");
    }

    return 0;
}