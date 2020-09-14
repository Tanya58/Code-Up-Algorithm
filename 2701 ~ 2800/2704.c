#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 15000

int compare(const void *a, const void *b)
{
    if (strlen((char *)a) > strlen((char *)b))
    {
        return -1;
    }
    else if (strlen((char *)a) < strlen((char *)b))
    {
        return 1;
    }
    else
    {
        return strcmp((char *)a, (char *)b) > 0 ? -1 : 1;
    }
}

int main()
{
    int N = 0;
    scanf("%d", &N);

    char arr[MAX][6] = {0};
    for (int i = 0; i < N; i++)
    {
        scanf("%s", arr[i]);
    }
    qsort(arr, N, sizeof(arr[0]), compare);
    for (int i = 0; i < N; i++)
    {
        printf("%s ", arr[i]);
    }
    return 0;
}