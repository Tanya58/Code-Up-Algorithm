#include <stdio.h>

int f(int k)
{
    return k > 0 ? f(k - 1) + f(k - 2) : k == 0 ? 1 : 0;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%d", f(n));
    return 0;
}