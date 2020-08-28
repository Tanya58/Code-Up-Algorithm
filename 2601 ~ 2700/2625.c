#include <stdio.h>
#include <math.h>

int main()
{
    int m = 0;
    scanf("%d", &m);

    int cnt = 0;
    for (int a = 1; a <= m - 2; a++)
    {
        for (int b = 1; b <= m - a - 1; b++)
        {
            for (int c = 1; c <= m - a - b; c++)
            {
                if (a <= b && b <= c && a + b + c == m && a + b > c)
                {
                    cnt++;
                }
            }
        }
    }
    printf("%d", cnt);

    return 0;
}