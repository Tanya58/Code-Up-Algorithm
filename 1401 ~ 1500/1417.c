#include <stdio.h>

void sort(int arr[], int arr_len)
{
    int tmp = 0;
    for (int i = 0; i < arr_len - 1; i++)
    {
        for (int j = i; j < arr_len - 1; j++)
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
    int height[10] = {0};
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &height[i]);
    }

    sort(height, sizeof(height) / sizeof(int));
    printf("%d", height[10 - 3]);
    return 0;
}