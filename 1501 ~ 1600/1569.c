#include <stdio.h>

int n, k, d[1010];

int findi(int a)
{
    int idx = -1;
    for (int i = 1; i <= n; i++)
    {
        if (d[i] == a)
        {
            idx = i;
            break;
        }
    }
    return idx;
}

int main()
{
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        scanf("%d", &d[i]);

    scanf("%d", &k);

    printf("%d\n", findi(k));
}