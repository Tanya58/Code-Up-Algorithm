#include <stdio.h>

int main()
{
    int N = 0;
    scanf("%d", &N);

    int arr[10000] = {0};
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = 0, min = 0;
    for (int i = 1; i < N; i++)
    {
        if (arr[max] < arr[i])
        {
            max = i;
        }
        if (arr[min] > arr[i])
        {
            min = i;
        }
    }
    printf("%d : %d\n", max + 1, arr[max]);
    printf("%d : %d\n", min + 1, arr[min]);

    return 0;
}