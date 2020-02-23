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

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        printf("%d ", sum);
    }

    return 0;
}