#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N = 0;
    scanf("%d", &N);

    int *H = (int *)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &H[i]);
    }

    int up = 0, down = 0;
    for (int i = 0; i < N - 1; i++)
    {
        if (H[i] < H[i + 1])
        {
            up++;
        }
        else if (H[i] > H[i + 1])
        {
            down++;
        }
    }
    printf("%d %d", up, down);

    free(H);
    return 0;
}