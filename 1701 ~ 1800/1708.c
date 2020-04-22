#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    int rank[1000] = {0};
    int score[1000] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &score[i]);
    }
    for (int i = 0; i < n; i++)
    {
        rank[i]++;
        for (int j = 0; j < n; j++)
        {
            if (score[i] < score[j])
            {
                rank[i]++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d %d\n", score[i], rank[i]);
    }

    return 0;
}