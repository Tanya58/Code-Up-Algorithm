#include <stdio.h>
#include <math.h>

int main()
{
    int N = 0;
    scanf("%d", &N);

    int sum = 0;
    for (int i = 1; i <= sqrt(N); i++)
    {
        if (N % i == 0)
        {
            sum += i;
            sum += N / i != i ? N / i : 0;
        }
    }
    printf("%d", sum);
    return 0;
}