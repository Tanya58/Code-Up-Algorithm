#include <stdio.h>

int main()
{
    int a = 0, d = 0, n = 0;
    scanf("%d %d %d", &a, &d, &n);
    printf("%d", a + d * (n - 1));
    return 0;
}