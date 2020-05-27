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

    char isDesc = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (num[i] <= num[i + 1])
        {
            isDesc = 0;
        }
    }

    printf("%s", !isAsc && !isDesc ? "섞임" : isAsc ? "오름차순" : "내림차순");

    return 0;
}