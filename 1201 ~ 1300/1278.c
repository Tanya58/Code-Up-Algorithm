#include <stdio.h>

int main()
{
    int n = 0, cnt = 1;
    scanf("%d", &n);
    for (; n / 10; cnt++)
        n /= 10;
    printf("%d", cnt);
    return 0;
}