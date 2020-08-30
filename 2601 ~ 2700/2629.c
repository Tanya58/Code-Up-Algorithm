#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct
{
    double r;
    int p;
} t_city;

int compare(const void *a, const void *b)
{
    t_city *tmp1 = (t_city *)a;
    t_city *tmp2 = (t_city *)b;

    if (tmp1->r < tmp2->r)
    {
        return -1;
    }
    else if (tmp1->r > tmp2->r)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int N = 0, P = 0;
    scanf("%d %d", &N, &P);

    t_city *input = (t_city *)malloc(sizeof(t_city) * N);
    memset(input, 0, sizeof(t_city) * N);

    int x = 0, y = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d %d %d", &x, &y, &input[i].p);
        input[i].r = sqrt(x * x + y * y);
    }

    qsort(input, N, sizeof(t_city), compare);

    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += input[i].p;
        if (sum >= 1000000 - P)
        {
            printf("%.3f", input[i].r);
            goto EXIT;
        }
    }
    printf("-1");
EXIT:
    free(input);
    return 0;
}