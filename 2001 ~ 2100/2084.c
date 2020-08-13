#include <stdio.h>
#include <stdlib.h>

int search(int num[], int len, int value)
{
    int start = 0, end = len - 1;
    int middle = 0;
    while (start <= end)
    {
        middle = (start + end) / 2;
        if (num[middle] == value)
        {
            return middle + 1;
        }
        else if (num[middle] < value)
        {
            start = middle + 1;
        }
        else if (num[middle] > value)
        {
            end = middle - 1;
        }
    }
    return -1;
}

int main()
{
    int n = 0;
    scanf("%d", &n);

    int *num = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    int m = 0;
    scanf("%d", &m);

    int *s = (int *)malloc(sizeof(int) * m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &s[i]);
        printf("%d\n", search(num, n, s[i]));
    }
    free(num);
    return 0;
}