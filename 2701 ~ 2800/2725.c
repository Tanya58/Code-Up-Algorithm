#include <stdio.h>

long long int f(int a, int b)
{
    long long int sum1 = (long long int)b * (b + 1) / 2;
    long long int sum2 = (long long int)a * (a - 1) / 2;
    return sum1 - sum2;
}

int main()
{
    int n = 0;
    scanf("%d", &n);

    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        int start = i, end = n;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            long long int sum = f(i, mid);
            if (sum == n)
            {
                cnt++;
                break;
            }
            else if (sum < n)
            {
                start = mid + 1;
            }
            else if (sum > n)
            {
                end = mid - 1;
            }
        }
    }
    printf("%d", cnt);

    return 0;
}