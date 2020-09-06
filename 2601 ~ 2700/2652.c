#include <stdio.h>

int f(int n, int r)
{
    return r == 1 ? n : n < r ? 0 : f(n - 2, r - 1) + f(n - 1, r);
}

int main()
{
    int n = 0, k = 0;
    scanf("%d %d", &n, &k);
    printf("%d", f(n, k));
    return 0;
}