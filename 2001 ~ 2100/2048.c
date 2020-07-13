#include <stdio.h>

int map[4][4];

int iscombine()
{
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum += map[i][j];
        }
    }
    return sum == (sum & -sum) ? 1 : 0;
}

int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &map[i][j]);
        }
    }

    printf("%s", iscombine() ? "yes" : "no");

    return 0;
}