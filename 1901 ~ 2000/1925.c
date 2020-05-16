#include <stdio.h>

int f(int n, int r)
{
    if (n < r)
        return 0;
    if (r == 0 || n == r)
        return 1;
    return f(n - 1, r - 1) + f(n - 1, r);
}

int main()
{
    int n = 0, r = 0;
    scanf("%d %d", &n, &r);
    printf("%d", f(n, r));
    return 0;
}