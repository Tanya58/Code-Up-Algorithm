#include <stdio.h>
#include <string.h>

int main()
{
    int n = 0, g = 0;
    scanf("%d %d", &n, &g);

    int arr[100] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result[100] = {0};
    for (int i = 0; i < 100; i++)
    {
        result[i] = 1001;
    }

    int cnt = -1;
    while (++cnt < n)
    {
        if (arr[cnt] < result[cnt / g])
        {
            result[cnt / g] = arr[cnt];
        }
    }

    cnt = -1;
    while (result[++cnt] != 1001)
    {
        printf("%d ", result[cnt]);
    }

    return 0;
}