#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int count = 0;
int factor[10000];

void add(int k)
{
    for (int i = 0; i < count; i++)
    {
        if (factor[i] == k)
        {
            return;
        }
    }
    factor[count] = k;
    count++;
}

void factorize(int k)
{
    for (int i = 1; i <= sqrt(k); i++)
    {
        if (k % i == 0)
        {
            add(i);
            add(k / i);
        }
    }
}

int flag = 0;
int compare(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);

    factorize(a);
    factorize(b);

    qsort(factor, count, sizeof(int), compare);

    for (int i = 0; i < count; i++)
    {
        printf("%d ", factor[i]);
    }

    return 0;
}