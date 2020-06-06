#include <stdio.h>

int main()
{
    int n = 0;
    char num[201] = {0};

    scanf("%d %s", &n, num);

    for (int i = 0; i < n; i++)
    {
        if (i && ((n - i) % 3 == 0))
        {
            printf(",");
        }
        printf("%c", num[i]);
    }

    return 0;
}