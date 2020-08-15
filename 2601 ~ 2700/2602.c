#include <stdio.h>
#include <string.h>

int main()
{
    int std[4][4];
    memset(std, 0, sizeof(std));

    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d %d", &std[i][0], &std[i][1], &std[i][2]);
        std[i][3] = std[i][0] + std[i][1] + std[i][2];

        for (int j = 0; j < 4; j++)
        {
            std[3][j] += std[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        printf("%d %d %d %d\n", std[i][0], std[i][1], std[i][2], std[i][3]);
    }

    return 0;
}