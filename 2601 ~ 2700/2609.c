#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);

    int remainder[1000] = {a};
    for (int i = 1; i < 1000; i++)
    {
        remainder[i] = (remainder[i - 1] % b) * 10;

        for (int j = 1; j < i; j++)
        {
            if (remainder[i] == remainder[j])
            {
                printf("%d.", remainder[0] / b);
                for (int k = 1; k < i; k++)
                {
                    if (k == j)
                    {
                        printf("(");
                    }
                    printf("%d", remainder[k] / b);
                    if (k == i - 1)
                    {
                        printf(")");
                    }
                }
                return 0;
            }
        }
    }
    return 0;
}