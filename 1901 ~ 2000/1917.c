#include <stdio.h>

long long int f(int n, int k)
{
    if (k == 0 || n == 1)
    {
        return 1;
    }
    else if (n == -1)
    {
        return k % 2 ? -1 : 1;
    }
    else
    {
        return n * f(n, k - 1);
    }
}

int main()
{
    int n = 0, k = 0;
    scanf("%d %d", &n, &k);
    printf("%lld", f(n, k));
    return 0;
}