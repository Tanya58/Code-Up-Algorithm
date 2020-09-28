#include <stdio.h>

long long int chk[10000];

long long int f(int k, int c)
{
    if (k < 0)
    {
        return 0;
    }
    if (k == 0)
    {
        return 1;
    }
    if (c)
    {
        return f(k - 1, c - 1) + f(k - 2, c - 1);
    }
    if (chk[k] == 0)
    {
        chk[k] = f(k - 1, 0) + f(k - 2, 0);
        chk[k] %= 1000000007;
        chk[k] += f(k - 3, 2);
        chk[k] %= 1000000007;
    }
    return chk[k];
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%lld", f(n, 0));
    return 0;
}