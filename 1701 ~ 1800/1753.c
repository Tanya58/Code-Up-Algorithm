#include <stdio.h>
#include <string.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    char names[100][101] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%s", names[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int t = strlen(names[i]) - 1;
        while (t >= 0)
        {
            printf("%c", names[i][t--]);
        }
        puts("");
    }

    return 0;
}