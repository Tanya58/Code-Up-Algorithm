#include <stdio.h>
#include <stdlib.h>

typedef struct machine
{
    int no;
    int gas;
} t_machine;

int compare(const void *a, const void *b)
{
    t_machine tmp1 = *(t_machine *)a;
    t_machine tmp2 = *(t_machine *)b;

    if (tmp1.no < tmp2.no)
    {
        return -1;
    }
    return 1;
}

int main()
{
    int n = 0;
    scanf("%d ", &n);

    t_machine m[100] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &m[i].no, &m[i].gas);
    }

    qsort(m, n, sizeof(t_machine), compare);

    for (int i = 0; i < n; i++)
    {
        printf("%d %d\n", m[i].no, m[i].gas);
    }

    return 0;
}