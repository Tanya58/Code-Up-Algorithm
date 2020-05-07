#include <stdio.h>

int nCr(int p, int q)
{
    if (p < q)
        return 0;
    if (p == q || q == 0)
        return 1;
    return nCr(p - 1, q - 1) + nCr(p - 1, q);
}

int main()
{
    int n = 0, r = 0;
    scanf("%d %d", &n, &r);
    printf("%d", nCr(n, r));
    return 0;
}