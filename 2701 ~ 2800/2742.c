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

    int status[20] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &status[i]);
    }

    qsort(status, n, sizeof(int), compare);

    int tmp = status[0];
    status[0] = status[n / 2];
    status[n / 2] = tmp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", status[i]);
    }

    return 0;
}