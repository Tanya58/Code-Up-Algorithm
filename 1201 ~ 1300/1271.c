#include <stdio.h>

int main()
{
    int n = 0, tmp = 0, max = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tmp);
        if (tmp > max)
            max = tmp;
    }
    printf("%d", max);
    return 0;
}