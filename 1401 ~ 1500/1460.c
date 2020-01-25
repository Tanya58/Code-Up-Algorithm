#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    int cnt = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", cnt++);
        }
        printf("\n");
    }

    return 0;
}