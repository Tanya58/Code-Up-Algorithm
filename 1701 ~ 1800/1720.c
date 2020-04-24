#include <stdio.h>

int min(int a, int b, int c)
{
    return a < b ? (a < c ? a : c) : (b < c ? b : c);
}

int main()
{
    int n = 0;
    scanf("%d", &n);

    int result[2] = {-1, 0};
    int a = 0, b = 0, c = 0, d = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);

        if (min(a, b, c) != d)
        {
            if (result[0] == -1)
            {
                result[0] = i + 1;
                result[1] = min(a, b, c);
            }
        }
    }

    printf("%d ", result[0]);
    if (result[0] != -1)
    {
        printf("%d", result[1]);
    }

    return 0;
}