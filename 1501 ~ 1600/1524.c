#include <stdio.h>

int direction[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};

int map[9][9];

int detect(int x, int y)
{
    int cnt = 0;

    if (map[x][y] == 1)
    {
        return -1;
    }

    for (int i = 0; i < 8; i++)
    {
        int tx = x + direction[i][0];
        int ty = y + direction[i][1];

        if (tx < 0 || tx >= 9 || ty < 0 || ty >= 9)
        {
            continue;
        }

        if (map[tx][ty] == 1)
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            scanf("%d", &map[i][j]);
        }
    }

    int r = 0, c = 0;
    scanf("%d %d", &r, &c);

    printf("%d", detect(r - 1, c - 1));

    return 0;
}