#include <stdio.h>

int number[10000000];

int main()
{
    int tmp = 0;
    int n = 0, m = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tmp);
        number[tmp - 1] = 1;
    }

    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &tmp);
        printf("%d ", number[tmp - 1]);
    }

    return 0;
}
