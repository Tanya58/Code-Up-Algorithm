#include <stdio.h>

int main()
{
    int a = 0, d = 0, n = 0;
    int result = 0;
    scanf("%d %d %d", &a, &d, &n);
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            result = a;
        else
            result *= d;
    }
    printf("%d", result);
    return 0;
}