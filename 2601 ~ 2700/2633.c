#include <stdio.h>

int arr[100000];

int main()
{
    int n = 0, k = 0;
    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= k)
        {
            printf("%d", i + 1);
            return 0;
        }
    }
    printf("%d", n + 1);

    return 0;
}