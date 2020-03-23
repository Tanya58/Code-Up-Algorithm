#include <stdio.h>

long long int n;

long long int f(long long int a)
{
    int len = 0;
    char nums[20] = {0};

    for (long long int v = a; v > 0; v /= 10)
    {
        nums[len++] = v % 10;
    }

    long long int digit = 1;
    long long int result = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        result += nums[i] * digit;
        digit *= 10;
    }
    return result;
}

int main()
{
    scanf("%lld", &n);
    printf("%lld\n", f(n));
}