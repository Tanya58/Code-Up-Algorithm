#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);

    int abs_b = b < 0 ? -b : b;
    int t1 = -abs_b, t2 = 0;
    do
    {
        if (t1 == 0 || b % t1 != 0)
        {
            continue;
        }

        t2 = b / t1;

        if (t1 + t2 == a)
        {
            int min = t1 < t2 ? t1 : t2;
            int max = t1 > t2 ? t1 : t2;

            printf("%s%d\n", min < 0 ? "x" : "x+", min);
            if (t1 != t2)
            {
                printf("%s%d\n", max < 0 ? "x" : "x+", max);
            }
            return 0;
        }

    } while (t1++ < abs_b);

    printf("-1");

    return 0;
}