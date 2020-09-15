#include <stdio.h>

int main()
{
    int N = 0;
    scanf("%d", &N);

    int L = 0, T = 0;
    scanf("%d %d", &L, &T);

    int k = 0, K[61] = {0};
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &k);
        K[k]++;
    }

    int total = 0, stop = 0;
    for (int sec = 0; sec <= 60; sec++)
    {
        if (sec < stop)
        {
            continue;
        }
        if (K[sec] < L)
        {
            total += K[sec];
        }
        else
        {
            stop = sec + T;
        }
    }
    printf("%d", 10000 * total);

    return 0;
}