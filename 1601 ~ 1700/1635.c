#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100000

int compare(const void *a, const void *b)
{
    return strncmp((char *)a, (char *)b, 10);
}

int main()
{
    int n = 0;
    scanf("%d", &n);

    char data[MAX][11] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%10s", data[i]);
    }

    qsort(data, n, sizeof(data[0]), compare);

    for (int i = 0; i < n; i++)
    {
        printf("%s\n", data[i]);
    }

    return 0;
}