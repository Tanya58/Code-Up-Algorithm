#include <stdio.h>

int m, n, num[21];

int f(int idx, int sum)
{
    if (idx < 0)
    {
        return sum == m ? 1 : 0;
    }
    return f(idx - 1, sum + num[idx]) + f(idx - 1, sum - num[idx]);
}

int main()
{
    scanf("%d", &m);
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("%d", f(n - 1, 0));

    return 0;
}
