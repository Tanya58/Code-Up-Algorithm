#include <stdio.h>

int factorial(int n)
{
    return n == 1 ? 1 : factorial(n - 1);
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%d", factorial(n));
    return 0;
}