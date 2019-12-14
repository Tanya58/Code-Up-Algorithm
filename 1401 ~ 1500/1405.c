#include <stdio.h>

int main()
{
    int n = 0;
    int arr[1000] = {0};
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n + i; j++)
        {
            printf("%d ", arr[j % n]);
        }
        printf("\n");
    }

    return 0;
}