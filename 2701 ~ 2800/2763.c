#include <stdio.h>

int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    printf("%s", gcd(a, b) == 1 ? "coprime" : "no");
    return 0;
}