#include <stdio.h>

int n, m;

int min(int a, int b)
{
    return a < b ? a : b;
}

int main()
{
    scanf("%d%d", &n, &m);
    printf("%d\n", min(n, m));
}