#include <stdio.h>
#include <math.h>

int H, W;
int MAP[100][100];

int spread(int x, int y)
{
    if (x < 0 || y < 0 || x >= H || y >= W || MAP[x][y] == 0)
    {
        return 0;
    }
    MAP[x][y] = 0;
    int cnt = 1;
    cnt += spread(x + 1, y);
    cnt += spread(x - 1, y);
    cnt += spread(x, y + 1);
    cnt += spread(x, y - 1);
    return cnt;
}

int main()
{
    scanf("%d %d", &H, &W);
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            scanf("%d", &MAP[i][j]);
        }
    }

    double sum = 0;
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (MAP[i][j] == 0)
            {
                continue;
            }
            sum += sqrt((double)spread(i, j));
        }
    }
    printf("%.4f ", sum);
    return 0;
}