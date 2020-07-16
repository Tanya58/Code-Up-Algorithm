#include <stdio.h>

int map[4][4];

int getScore(int block)
{
    return block > 2 ? block + 2 * getScore(block / 2) : 0;
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

    int score = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            score += getScore(map[i][j]);
        }
    }

    int block4 = 0;
    scanf("%d", &block4);
    score -= 4 * block4;

    printf("%d", score);

    return 0;
}