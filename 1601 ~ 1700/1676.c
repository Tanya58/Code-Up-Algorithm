#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    int rank[2000] = {0};
    int company[2000] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &company[i]);
    }

    for (int i = 0; i < n; i++)
    {
        rank[i] = 1;
        for (int j = 1; j < n; j++)
        {
            if (company[i] < company[(i + j) % n])
            {
                rank[i] += 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", rank[i]);
    }

    return 0;
}