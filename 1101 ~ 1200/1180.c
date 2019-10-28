#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    n = (((n % 10) * 10 + (n / 10)) * 2) % 100;
    printf("%d\n%s", n, n > 50 ? "OH MY GOD" : "GOOD");
    return 0;
}