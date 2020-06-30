#include <stdio.h>

int move[100001][2];

int main()
{
    int k = 0, n = 0;

    scanf("%d %d", &k, &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &move[i][0], &move[i][1]);
    }

    int p = 0;
    scanf("%d", &p);

    for (int i = 0; i < n; i++)
    {
        if (move[i][0] == p)
        {
            p = move[i][1];
        }
        else if (move[i][1] == p)
        {
            p = move[i][0];
        }
    }

    printf("%d", p);

    return 0;
}