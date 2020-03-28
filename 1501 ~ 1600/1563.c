#include <stdio.h>

int n, m, x;

int max(int p, int q) { return p >= q ? p : q; }

int min(int p, int q) { return p < q ? p : q; }

int mid(int a, int b, int c)
{
    return a + b + c - max(max(a, b), c) - min(min(a, b), c);
}

int main()
{
    scanf("%d%d%d", &n, &m, &x);
    printf("%d\n", mid(n, m, x));
}