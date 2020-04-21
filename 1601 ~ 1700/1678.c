#include <stdio.h>

int main()
{
    int map[5][5] = {0};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &map[i][j]);
        }
    }

    int max = 0;
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            int sum = 0;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    sum += map[x + i][y + j];
                }
            }
            if (max < sum)
            {
                max = sum;
            }
        }
    }

    printf("%d", max);

    return 0;
}