#include <stdio.h>

long long f()
{
    return -2147483649;
}

int main()
{
    printf("%lld", f());
    return 0;
}