#include <stdio.h>

long long int nPr(int n, int r)
{
    return r == 1 ? n : n * nPr(n - 1, r - 1);
}

int main()
{
    int n = 0, k = 0;
    scanf("%d %d", &n, &k);
    printf("%lld", nPr(n, k) / nPr(k, k));
    return 0;
}