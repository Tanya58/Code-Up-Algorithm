#include <stdio.h>

int map[4][4];

void up()
{
    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int t = i + 1; t < 4; t++)
            {
                if (map[i][j] == 0)
                {
                    map[i][j] = map[t][j];
                    map[t][j] = 0;
                }
                else if (map[t][j] == 0)
                {
                    continue;
                }
                else if (map[i][j] != map[t][j])
                {
                    break;
                }
                else
                {
                    map[i][j] += map[t][j];
                    map[t][j] = 0;
                    break;
                }
            }
        }
    }
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
    up();
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", map[i][j]);
        }
        printf("\n");
    }

    return 0;
}