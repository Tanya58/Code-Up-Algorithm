#include <stdio.h>

void swap(int arr[], int a, int b)
{
    int tmp = arr[a];
    arr[a] = arr[b];
    arr[b] = tmp;
}

int partition(int arr[], int left, int right)
{
    int pviot = arr[left];
    int low = left + 1;
    int high = right;

    while (low < high)
    {
        while (low < right && pviot >= arr[low])
        {
            low++;
        }

        while (high > left && pviot <= arr[high])
        {
            high--;
        }

        if (low < high)
        {
            swap(arr, low, high);
        }
    }
    if (arr[left] > arr[high])
    {
        swap(arr, left, high);
    }
    return high;
}

void quick_sort(int arr[], int left, int right)
{
    if (left < right)
    {
        int q = partition(arr, left, right);

        quick_sort(arr, left, q - 1);
        quick_sort(arr, q + 1, right);
    }
}

int main()
{
    int n = 0;
    int arr[100000] = {0};

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    quick_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}