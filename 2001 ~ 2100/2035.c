#include <stdio.h>

char chair[10000];

int main()
{
    int n = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &chair[i]);
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (chair[i] == 1)
        {
            continue;
        }
        if (i > 0 && chair[i - 1] == 1)
        {
            continue;
        }
        if (i < n - 1 && chair[i + 1] == 1)
        {
            continue;
        }
        cnt++;
    }
    printf("%d", cnt);

    return 0;
}