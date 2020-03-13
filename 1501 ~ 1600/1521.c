#include <stdio.h>

int field[50][50];

int main()
{
    int k = 0, n = 0;
    scanf("%d %d", &k, &n);

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            scanf("%d", &field[i][j]);
        }
    }

    int cnt = 0;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (field[i][j] >= 0 && field[i][j] + n >= 0 && field[i][j] + n < 6)
            {
                cnt++;
            }
        }
    }

    printf("%d", cnt);

    return 0;
}