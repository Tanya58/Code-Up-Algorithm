#include <stdio.h>

int f(int n, int k)
{
    (n / k) && f(n / k, k);
    int t = n % k;
    putchar(t < 10 ? '0' + t : t < 36 ? 'A' + t - 10 : 0);
}

int main()
{
    int n = 0, k = 0;
    scanf("%d %d", &n, &k);
    f(n, k);
    return 0;
}
