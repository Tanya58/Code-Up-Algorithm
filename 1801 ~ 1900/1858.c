#include <stdio.h>

int Pascal(int p, int q)
{
    if (q == 1 || p == q)
        return 1;

    return Pascal(p - 1, q - 1) + Pascal(p - 1, q);
}

int main()
{
    int n = 0, k = 0;
    scanf("%d %d", &n, &k);
    printf("%d", Pascal(n, k));
    return 0;
}