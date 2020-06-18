#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int diff(int a, int b)
{
    return a > b ? a - b : b - a;
}

int main()
{
    int n = 0;
    scanf("%d", &n);

    int max = 0;
    int *sensors = (int *)malloc(sizeof(int) * n);
    memset(sensors, 0, sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &sensors[i]);
        max = max < sensors[i] ? sensors[i] : max;
    }

    int frequency[1000] = {0};
    for (int i = 0; i < n; i++)
    {
        frequency[sensors[i] - 1]++;
    }

    int rank[1000] = {0};
    for (int i = 0; i < max; i++)
    {
        for (int j = 0; j < max; j++)
        {
            if (frequency[i] < frequency[j])
            {
                rank[i]++;
            }
        }
    }

    int flag = 0; // two zero flag
    int result = 0;
    for (int i = 0; i < max; i++)
    {
        if (rank[i] != 0)
        {
            continue;
        }

        for (int j = 0; j < max; j++)
        {
            if (i == j || rank[j] > 1)
            {
                continue;
            }

            flag = !flag && rank[j] ? 0 : 1;

            if (flag && rank[j])
            {
                continue;
            }

            int t = diff(i, j);
            if (result < t)
            {
                result = t;
            }
        }
    }

    printf("%d", result);

    free(sensors);
    return 0;
}