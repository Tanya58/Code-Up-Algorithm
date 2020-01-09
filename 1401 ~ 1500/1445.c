#include <stdio.h>

int main()
{
    int n = 0, m = 0;
    int arr1[1000] = {0}, arr2[1000] = {0};
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int idx1 = 0, idx2 = 0;
    while (idx1 < n || idx2 < m)
    {
        if (idx1 == n)
        {
            printf("%d ", arr2[idx2++]);
            continue;
        }
        if (idx2 == m)
        {
            printf("%d ", arr1[idx1++]);
            continue;
        }

        if (arr1[idx1] < arr2[idx2])
        {
            printf("%d ", arr1[idx1++]);
        }
        else
        {
            printf("%d ", arr2[idx2++]);
        }
    }

    return 0;
}