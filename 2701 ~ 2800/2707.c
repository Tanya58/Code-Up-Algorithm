#include <stdio.h>
#include <math.h>

int f(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        int tmp = i;
        while (tmp < n)
        {
            tmp *= i;
        }
        if (tmp == n)
        {
            return i;
        }
    }
    return n;
}

int main()
{
    int N = 0;
    scanf("%d", &N);
    printf("%d", f(N));
    return 0;
}