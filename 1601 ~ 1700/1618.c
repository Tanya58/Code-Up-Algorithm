#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    int num1 = *(int *)a;
    int num2 = *(int *)b;

    if (num1 < num2)
    {
        return -1;
    }
    if (num1 > num2)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int weight[3] = {0};
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &weight[i]);
    }

    qsort(weight, sizeof(weight) / sizeof(int), sizeof(int), compare);

    for (int i = 0; i < 3; i++)
    {
        printf("%d ", weight[i]);
    }

    return 0;
}