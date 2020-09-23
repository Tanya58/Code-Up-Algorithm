#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    int cnt = 0;
    for (int start = 1; start <= n; start++)
    {
        int sum = start;
        for (int i = start + 1; i <= n; i++)
        {
            sum += i;
            if (sum == n)
            {
                cnt++;
                break;
            }
        }
    }
    printf("%d", cnt);

    return 0;
}