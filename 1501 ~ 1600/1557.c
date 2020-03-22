#include <stdio.h>

int n;

int f(int a)
{
    int cnt = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (a % i == 0)
        {
            cnt++;
            if (i * i < n)
            {
                cnt++;
            }
        }
    }
    return cnt;
}
int main()
{
    scanf("%d", &n);
    printf("%d\n", f(n));
}
