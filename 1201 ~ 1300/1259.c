#include <stdio.h>

int main()
{
    int n = 0, sum = 0;
    scanf("%d", &n);
    for (int i = 2; i <= n; i += 2)
    {
        sum += i;
    }
    printf("%d", sum);
    return 0;
}