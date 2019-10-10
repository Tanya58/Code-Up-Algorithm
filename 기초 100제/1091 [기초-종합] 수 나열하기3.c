#include <stdio.h>

int main()
{
    int a = 0, m = 0, d = 0, n = 0;
    long long result = 0;
    scanf("%d %d %d %d", &a, &m, &d, &n);
    result = a;
    for (int i = 0; i < n - 1; i++)
    {
        result *= m;
        result += d;
    }
    printf("%lld", result);
    return 0;
}