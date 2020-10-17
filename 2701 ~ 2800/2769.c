#include <stdio.h>

int main()
{
    int N = 0, M = 0, K = 0;
    scanf("%d %d %d", &N, &M, &K);

    int team = N / 2 > M ? M : N / 2;
    N -= team * 2;
    M -= team;
    while (N + M < K)
    {
        team--;
        N += 2;
        M += 1;
    }
    printf("%d", team);

    return 0;
}