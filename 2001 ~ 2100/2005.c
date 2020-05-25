#include <stdio.h>

int element[10000];

int main()
{
    int n = 0, m = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &element[i]);
    }
    scanf("%d", &m);

    int isFactorSystem = 1;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((element[i] - element[j]) % m == 0)
            {
                isFactorSystem = 0;
            }
        }
    }

    printf("%s", isFactorSystem ? "yes" : "no");

    return 0;
}