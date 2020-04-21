#include <stdio.h>

int main()
{
    for (int t = 1; t < 10; t++)
    {
        for (int s = 1; s < 10; s++)
        {
            for (int o = 0; o < 10; o++)
            {
                if (t == s || t == o || t == s)
                {
                    continue;
                }
                int exp1 = 10 * s + o;
                int exp2 = 10 * s + o;
                int ret = 100 * t + 10 * o + o;
                if (exp1 + exp2 == ret)
                {
                    printf("%d%d+%d%d=%d%d%d", s, o, s, o, t, o, o);
                }
            }
        }
    }

    return 0;
}