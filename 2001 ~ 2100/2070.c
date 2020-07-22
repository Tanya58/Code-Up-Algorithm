#include <stdio.h>
#include <string.h>

int main()
{
    char c = 0, e = 0;
    int n = 0, m = 0, k = 0, a = 0;
    scanf("%d %d %d %c %d %c", &n, &m, &k, &c, &a, &e);

    char stamp[1002][1002] = {0};
    memset(stamp, '.', sizeof(stamp));
    for (int i = 0; i < m + 2; i++)
    {
        for (int j = 0; j < n + 2; j++)
        {
            if ((i == 0 || i == m + 1) && (j == 0 || j == n + 1))
            {
                stamp[i][j] = '+';
            }
            else if (i == 0 || i == m + 1)
            {
                stamp[i][j] = e == 'G' ? '#' : e == 'D' ? '%' : e == 'T' ? '*' : '-';
            }
            else if (j == 0 || j == n + 1)
            {
                stamp[i][j] = e == 'G' ? '#' : e == 'D' ? '%' : e == 'T' ? '*' : '|';
            }
        }
    }

    char str[3][100] = {0};
    sprintf(str[0], "CodeUp");
    sprintf(str[1], "1,000,000");
    sprintf(str[2], "Congratulations!");
    int line = (m + 1) / 2 - 1;
    for (int i = 0; i < 3; i++)
    {
        int sp = ((n + 1) / 2) - (strlen(str[i]) - 1) / 2;
        memcpy(stamp[line + i] + sp, str[i], strlen(str[i]));
    }

    char tmp[5] = {0};
    int len = sprintf(tmp, "%d", k);
    memcpy(stamp[m] + n - len, tmp, len);

    for (int i = 0; i < m + 2; i++)
    {
        for (int j = 0; j < n + 2; j++)
        {
            printf("%c", stamp[i][j]);
        }
        printf("\n");
    }

    double price = 0;
    int area = n * m;
    price = area > 300 ? 1000 : area > 100 ? 700 : area > 50 ? 500 : 300;
    price *= k > 300 ? 1.3 : k > 200 ? 1.2 : k > 100 ? 1.1 : 1.05;
    price *= c == 'C' ? 1.1 : 1;
    price *= a > 500 ? 0.7 : a > 200 ? 0.8 : a > 100 ? 0.9 : 0.95;
    price *= e == 'G' ? 1.5 : e == 'D' ? 1.3 : e == 'T' ? 1.1 : 1;
    printf("%d", (int)price / 10 * 10 * a);

    return 0;
}