#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    printf("%lld\n", (long long)a + b);
    printf("%lld\n", (long long)a - b);
    printf("%lld\n", (long long)a * b);
    printf("%lld\n", (long long)a / b);
    printf("%lld\n", (long long)a % b);
    printf("%.2f\n", (float)a / b);
    return 0;
}