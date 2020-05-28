#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    int num[100] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    char isAsc = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (num[i] >= num[i + 1])
        {
            isAsc = 0;
        }
    }

    if (isAsc)
    {
        printf("asc");
        return 0;
    }

    char isDesc = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (num[i] <= num[i + 1])
        {
            isDesc = 0;
        }
    }

    printf("%s", isDesc ? "desc" : "mix");

    return 0;
}