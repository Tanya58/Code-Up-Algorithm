#include <stdio.h>

int main()
{
    int n = 0, m = 0, A[100] = {0}, B[100] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &B[i]);
    }

    int null = 1;
    for (int i = 0, j = 0; i < n && j < m;)
    {
        if (A[i] == B[j])
        {
            printf("%d ", A[i]);
            i++;
            j++;
            null = 0;
        }
        else if (A[i] < B[j])
        {
            i++;
        }
        else if (A[i] > B[j])
        {
            j++;
        }
    }
    printf("%s", null ? "0\n" : "\n");
    for (int i = 0, j = 0; i < n || j < m;)
    {
        if (i < n && j < m)
        {
            printf("%d ", A[i] < B[j] ? A[i] : B[j]);
            if (A[i] == B[j])
            {
                i++;
                j++;
            }
            else if (A[i] < B[j])
            {
                i++;
            }
            else if (A[i] > B[j])
            {
                j++;
            }
        }
        else if (i < n)
        {
            printf("%d ", A[i]);
            i++;
        }
        else if (j < m)
        {
            printf("%d ", B[j]);
            j++;
        }
    }

    return 0;
}