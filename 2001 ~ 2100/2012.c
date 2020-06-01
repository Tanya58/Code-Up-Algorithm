#include <stdio.h>

int count1(int k)
{
    int count = 0;
    while (k > 0)
    {
        if (k % 10 == 1)
        {
            count++;
        }
        k /= 10;
    }
    return count;
}

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);

    int count = 0;
    for (int i = a; i <= b; i++)
    {
        count += count1(i);
    }
    printf("%d", count);

    return 0;
}