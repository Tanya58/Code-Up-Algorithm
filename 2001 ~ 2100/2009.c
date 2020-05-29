#include <stdio.h>

int main()
{
    int k = 0, n = 0;
    scanf("%d %d", &k, &n);

    int result = 0;
    while (k >= n)
    {
        result += k / n;
        k = k % n + k / n;
    }

    printf("%d", result);

    return 0;
}
