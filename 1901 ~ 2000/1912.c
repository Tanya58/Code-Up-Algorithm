#include <stdio.h>

int f(int k)
{
    return k > 1 ? k * f(k - 1) : 1;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%d", f(n));
    return 0;
}