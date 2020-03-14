#include <stdio.h>

int direction[24][2] = {{-2, -2}, {-2, -1}, {-2, 0}, {-2, 1}, {-2, 2}, {-1, -2}, {-1, -1}, {-1, 0}, {-1, 1}, {-1, 2}, {0, -2}, {0, -1}, {0, 1}, {0, 2}, {1, -2}, {1, -1}, {1, 0}, {1, 1}, {1, 2}, {2, -2}, {2, -1}, {2, 0}, {2, 1}, {2, 2}};

int flag = 0;
int arr[9][9];

void setWard(int x, int y)
{
    for (int d = 0; d < 24; d++)
    {
        int tx = x + direction[d][0];
        int ty = y + direction[d][1];

        if (tx < 0 || ty < 0 || tx >= 9 || ty >= 9 || arr[tx][ty])
        {
            continue;
        }
        arr[tx][ty] = 2;
    }
    arr[x][y] = 1;
}

void setBush(int x1, int y1, int x2, int y2)
{
    for (int i = x1; i <= x2; i++)
    {
        for (int j = y1; j <= y2; j++)
        {
            if (arr[i][j] == 1)
            {
                flag = 1;
            }
            else
            {
                arr[i][j] = 3;
            }
        }
    }
}

void setLens(int x, int y)
{
    if (arr[x][y] == 1)
    {
        flag = 0;
    }
    arr[x][y] = 0;
    for (int d = 0; d < 24; d++)
    {
        int tx = x + direction[d][0];
        int ty = y + direction[d][1];

        if (tx < 0 || ty < 0 || tx >= 9 || ty >= 9)
        {
            continue;
        }

        if (arr[tx][ty] == 1)
        {
            flag = 0;
            setLens(tx, ty);
        }
        else
        {
            arr[tx][ty] = 0;
        }
    }
}

int main()
{
    int a1 = 0, a2 = 0;
    int b1 = 0, b2 = 0;
    int c1 = 0, c2 = 0;
    int d1 = 0, d2 = 0;
    scanf("%d %d", &a1, &a2);
    scanf("%d %d", &b1, &b2);
    scanf("%d %d", &c1, &c2);
    scanf("%d %d", &d1, &d2);

    setWard(a1 - 1, a2 - 1);
    setBush(c1 - 1, c2 - 1, d1 - 1, d2 - 1);
    setLens(b1 - 1, b2 - 1);

    int cnt = 0;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (arr[i][j] > 0)
            {

                if (flag || (!flag && arr[i][j] < 3))
                {
                    cnt++;
                }
            }
        }
    }
    printf("%d", cnt);

    return 0;
}