#include <stdio.h>

int N, K;
int Map[101][101];

void bloom()
{
    int x = 0, y = 0;
    scanf("%d %d", &x, &y);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (x < i || y < j)
            {
                continue;
            }
            Map[x - i][y - j] = 0;
        }
    }
}

int calc()
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            sum += Map[i][j];
        }
    }
    return sum;
}

int main()
{
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &Map[i][j]);
        }
    }
    scanf("%d", &K);
    for (int i = 0; i < K; i++)
    {
        bloom();
    }
    printf("%d", calc());

    return 0;
}