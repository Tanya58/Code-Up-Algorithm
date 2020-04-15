#include <stdio.h>

int sumDigit(int k)
{
    int t = 0;
    while (k > 0)
    {
        t += k % 10;
        k /= 10;
    }
    return t;
}

int main()
{
    int n = 0;
    scanf("%d", &n);

    int tmp = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tmp);
        while (tmp > 9)
        {
            tmp = sumDigit(tmp);
        }
        printf("%d\n", tmp);
    }

    return 0;
}