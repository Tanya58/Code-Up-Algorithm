#include <stdio.h>
int a[10001];
int n, i, j, temp, key;
int main()
{
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    for (i = 2; i <= n; i++)
    {
        key = a[i];
        for (j = i - 1; j > 0 && a[j] > key; j--)
        {
            a[j + 1] = a[j];
        }
        a[j + 1] = key;
    }

    for (i = 1; i <= n; i++)
        printf("%d\n", a[i]);
    return 0;
}