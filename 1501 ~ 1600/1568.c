#include <stdio.h>

int n, a, b, d[1010];

int maxi(int p, int q)
{
    int idx = q;
    for (int i = q - 1; i >= p; i--)
    {
        if (d[idx] <= d[i])
        {
            idx = i;
        }
    }
    return idx;
}

int main()
{
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        scanf("%d", &d[i]);

    scanf("%d%d", &a, &b);

    printf("%d\n", maxi(a, b));
}
