#include <stdio.h>

int main()
{
    long long int n = 0, m = 0;
    scanf("%lld %lld", &n, &m);

    long long int tmp = 0;
    for (int i = 0; i < 7; i++)
    {
        tmp = tmp ? tmp * n : 1;
        if (tmp >= m)
        {
            printf("Dangerous");
            return 0;
        }
    }
    printf("Safe");

    return 0;
}