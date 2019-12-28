#include <stdio.h>

int main()
{
    unsigned int n = 0;
    int binary[32] = {0};
    scanf("%d", &n);

    int idx = 0;
    for (int i = 1; i <= n; i *= 2)
    {
        binary[idx++] = n & i ? 1 : 0;
    }

    for (int i = idx - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }

    if (idx == 0)
    {
        printf("0");
    }

    return 0;
}