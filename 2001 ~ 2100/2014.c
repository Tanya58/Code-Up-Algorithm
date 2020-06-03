#include <stdio.h>

int main()
{
    for (int i = 1; i < 10; i++) // ★
    {
        for (int j = 1; j < 10; j++) // ■
        {
            for (int k = 0; k < 10; k++) // ▲
            {
                if (i == j || i == k || j == k)
                {
                    continue;
                }
                int exp1 = 100 * i + 10 * k + j;
                int exp2 = 10 * i + k;
                int result = 11 * j;

                if (exp1 - exp2 == result)
                {
                    printf("%d%d%d-%d%d=%d%d\n", i, k, j, i, k, j, j);
                }
            }
        }
    }

    return 0;
}
