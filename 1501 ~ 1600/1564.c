#include <stdio.h>

int a, b;

int gcd(int n, int m)
{
    return m ? gcd(m, n % m) : n;
}

int main()
{
    scanf("%d%d", &a, &b);
    printf("%d\n", gcd(a, b));
}