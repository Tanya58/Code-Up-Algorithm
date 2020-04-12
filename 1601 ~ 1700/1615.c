#include <stdio.h>
#include <string.h>

#define MAX 5001

int generator(int k)
{
    int total = k;
    while (k > 0)
    {
        total += k % 10;
        k /= 10;
    }
    return total;
}

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);

    char selfNumber[MAX];
    memset(selfNumber, 1, sizeof(selfNumber));

    int k = 1, g = 0;
    while ((g = generator(k++)) < MAX)
    {
        selfNumber[g] = 0;
    }

    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        if (selfNumber[i])
        {
            sum += i;
        }
    }

    printf("%d", sum);

    return 0;
}