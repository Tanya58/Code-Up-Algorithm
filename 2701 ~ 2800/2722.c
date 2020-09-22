#include <stdio.h>

int f(int n)
{
    return n == 1 ? 5 : f(n - 1) + 3 * n + 1;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%d", f(n));
    return 0;
}