#include <stdio.h>

void sort(int arr[], int arr_len)
{
    int tmp = 0;
    for (int i = 0; i < arr_len - 1; i++)
    {
        for (int j = 0; j < arr_len - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

int main()
{
    int n = 0;
    int arr[10000] = {0};

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}