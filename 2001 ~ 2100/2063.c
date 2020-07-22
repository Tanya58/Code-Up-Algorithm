#include <stdio.h>

int M;
int Map[14][14];

void init()
{
    scanf("%d", &M);
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &Map[M - i - 1][j]);
        }
    }
}

int f(int x, int y, int fuel)
{
    if (x < 0 || y < 0 || x >= M || y >= M || fuel < 0)
    {
        return -1;
    }
    if (x == M - 1 && y == M - 1)
    {
        return fuel > 0 ? fuel : 0;
    }
    fuel -= Map[x][y] > 0 ? Map[x][y] : 0;
    int t1 = f(x, y + 1, fuel);
    int t2 = f(x + 1, y, fuel);
    return t1 > t2 ? t1 : t2;
}

int main()
{
    init();
    int fuel = 0;
    scanf("%d", &fuel);

    int rtn = f(0, 0, fuel);
    if (rtn == -1)
    {
        printf("NOOOO");
    }
    else
    {
        printf("%d", rtn);
    }

    return 0;
}