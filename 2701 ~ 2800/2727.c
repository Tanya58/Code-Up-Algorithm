#include <stdio.h>

int main()
{
    int t = 0;
    scanf("%d", &t);

    long long int n = 0, m = 0;
    for (int i = 1; i <= t; i++)
    {
        scanf("%lld %lld", &n, &m);
        printf("Scenario #%d:\n%lld\n\n", i, (n + m) * (m - n + 1) / 2);
    }

    return 0;
}