#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    int arr[100] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result[100] = {0};
    for (int i = 0; i < n; i += 2)
    {
        result[i / 2] = arr[i] < arr[i + 1] ? arr[i] : arr[i + 1];
    }

    for (int i = 0; i < n / 2; i++)
    {
        printf("%d ", result[i]);
    }

    return 0;
}