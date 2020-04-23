#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return *(int *)b - *(int *)a;
}

int main()
{
    int n = 0;
    scanf("%d", &n);

    int data[100] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &data[i]);
    }

    qsort(data, n, sizeof(int), compare);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", data[i]);
    }

    return 0;
}