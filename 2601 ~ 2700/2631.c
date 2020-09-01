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

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum < k)
            {
                continue;
            }
            if (sum == k)
            {
                cnt++;
            }
            break;
        }
    }
    printf("%d", cnt);

    return 0;
}
