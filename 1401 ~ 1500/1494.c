#include <stdio.h>

int main()
{
    int d[100] = {0};

    int n = 0, k = 0;
    scanf("%d %d", &n, &k);

    int s = 0, e = 0, u = 0;
    for (int i = 0; i < k; i++)
    {
        scanf("%d %d %d", &s, &e, &u);

        d[s - 1] += u;
        d[e] -= u;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", d[i]);
    }

    printf("\n");

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += d[i];
        printf("%d ", sum);
    }

    return 0;
}