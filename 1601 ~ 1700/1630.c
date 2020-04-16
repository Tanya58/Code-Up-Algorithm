#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    int alarm[100][100] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%s", alarm[i]);
    }

    printf("%s\n", alarm[0]);
    for (int i = 1; i < n; i++)
    {
        printf("AMOLED\n");
        printf("%s\n", alarm[i]);
    }

    return 0;
}