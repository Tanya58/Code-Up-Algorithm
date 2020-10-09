#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);

    int rtn[3] = {a + b, a - b, a * b};
    qsort(rtn, 3, sizeof(int), compare);
    printf("%d", rtn[1]);
    return 0;
}