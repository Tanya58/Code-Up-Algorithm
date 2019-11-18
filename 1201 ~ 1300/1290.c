#include <stdio.h>

int main()
{
    int n = 0, cnt = 0;
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
        }
    }
    printf("%d", cnt);

    return 0;
}