#include <stdio.h>

long long int fibonacci(int k)
{
    return k < 3 ? 1 : fibonacci(k - 1) + fibonacci(k - 2);
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%lld", fibonacci(n));
    return 0;
}
