#include <stdio.h>

int pascals[25][25];

void PascalRow(int i, int j)
{
    if (i < j)
    {
        return;
    }

    if (j == 0 || i == j)
    {
        pascals[i][j] = 1;
    }
    else
    {
        pascals[i][j] = pascals[i - 1][j - 1] + pascals[i - 1][j];
    }
    printf("%d ", pascals[i][j]);
    PascalRow(i, j + 1);
}

void Pascal(int k)
{
    if (k < 1)
        return;

    Pascal(k - 1);
    PascalRow(k - 1, 0);
    printf("\n");
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    Pascal(n);
    return 0;
}