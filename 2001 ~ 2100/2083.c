#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 0, k = 0;
    scanf("%d %d", &n, &k);

    int *num = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (num[i] == k)
        {
            printf("%d", i + 1);
            goto EXIT;
        }
    }
    printf("%d", -1);

EXIT:
    free(num);
    return 0;
}