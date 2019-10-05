#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);
    printf("%lld\n", (long long)a + b + c);
    printf("%.1f\n", (float)((long long)a + b + c) / 3);
    return 0;
}