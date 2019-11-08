#include <stdio.h>

int main()
{
    int n = 0, k = 0, sqrt = 1;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < k; i++)
    {
        sqrt *= n;
    }
    printf("%d", sqrt);
    return 0;
}