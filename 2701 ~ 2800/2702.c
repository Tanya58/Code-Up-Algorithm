#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N = 0;
    scanf("%d", &N);

    // malloc
    int **battery = (int **)malloc(sizeof(int *) * N);
    for (int i = 0; i < N; i++)
    {
        battery[i] = (int *)malloc(sizeof(int) * 6);
        for (int j = 0; j < 6; j++)
        {
            scanf("%d", &battery[i][j]);
        }
    }

    //
    int charge = 0;
    for (int i = 0; i < 6; i++)
    {
        int max = 0;
        for (int j = 1; j < N; j++)
        {
            if (battery[max][i] < battery[j][i])
            {
                max = j;
            }
        }
        charge += battery[max][i];
    }
    printf("%d", charge);

    // free
    for (int i = 0; i < N; i++)
    {
        free(battery[i]);
    }
    free(battery);

    return 0;
}