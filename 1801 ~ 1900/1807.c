#include <stdio.h>

// Collatz conjecture

int Collatz(int n)
{
    int count = 1;
    while (n != 1)
    {
        n = n % 2 ? 3 * n + 1 : n / 2;
        count++;
    }
    return count;
}

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);

    int Hail[10000] = {0};
    for (int i = a; i <= b; i++)
    {
        Hail[i] = Collatz(i);
    }

    int max = a;
    for (int i = a + 1; i <= b; i++)
    {
        if (Hail[max] < Hail[i])
        {
            max = i;
        }
    }

    printf("%d %d", max, Hail[max]);

    return 0;
}