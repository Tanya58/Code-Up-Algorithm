#include <stdio.h>

int f(int len, int k)
{
    if (len == 1)
    {
        return 1;
    }
    return k ? f(len - 1, 0) + f(len - 1, 1) : f(len - 1, 1);
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%d", f(n, 0) + f(n, 1));
    return 0;
}