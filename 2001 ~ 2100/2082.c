#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 0, k = 0;
    scanf("%d %d", &n, &k);

    int num[100000] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (num[i] == k)
        {
            printf("%d", i + 1);
            return 0;
        }
    }
    printf("%d", -1);
    return 0;
}