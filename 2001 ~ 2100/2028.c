#include <stdio.h>

int countDivisor(int k)
{
    int cnt = 0;
    for (int i = 1; i * i <= k; i++)
    {
        if (i * i == k)
        {
            cnt++;
        }
        else if (k % i == 0)
        {
            cnt += 2;
        }
    }
    return cnt;
}

int main()
{
    int k = 0;
    scanf("%d", &k);

    int sum = 0;
    for (int i = 1; countDivisor(sum) <= k; i++)
    {
        sum += i;
    }

    printf("%d", sum);

    return 0;
}