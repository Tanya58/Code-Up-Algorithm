#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%d", (n * n + n + 2) / 2 % 137);
    return 0;
}
