#include <stdio.h>

int main()
{
    int n = 0;
    char card[50] = {0};
    scanf("%d", &n);

    int tmp = 0;
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d", &tmp);
        card[tmp - 1] = 1;
    }

    int k = 0;
    while (card[k] == 1)
        k++;

    printf("%d", k + 1);

    return 0;
}