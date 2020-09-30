#include <stdio.h>
#include <string.h>

int lcs[1001][1001];

int Max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    char S1[1001] = {0}, S2[1001] = {0};
    scanf("%s %s", S1, S2);

    int len1 = strlen(S1);
    int len2 = strlen(S2);
    for (int i = 1; i <= len1; i++)
    {
        for (int j = 1; j <= len2; j++)
        {
            if (S1[i - 1] == S2[j - 1])
            {
                lcs[i][j] = lcs[i - 1][j - 1] + 1;
            }
            else
            {
                lcs[i][j] = Max(lcs[i - 1][j], lcs[i][j - 1]);
            }
        }
    }
    printf("%d\n", lcs[len1][len2]);

    char str[1001] = {};
    for (int i = len1, j = len2; i >= 1 && j >= 1 && lcs[i][j] != 0;)
    {
        if (lcs[i][j] == lcs[i - 1][j - 1])
        {
            i--;
            j--;
        }
        if (lcs[i][j] == lcs[i - 1][j] || lcs[i][j] == lcs[i][j - 1])
        {
            int t_i = 0, t_j = 0;
            while (lcs[i][j] == lcs[i - t_i - 1][j])
            {
                t_i++;
            }
            while (lcs[i][j] == lcs[i][j - t_j - 1])
            {
                t_j++;
            }
            if (t_i > t_j)
            {
                i -= t_i;
            }
            else
            {
                j -= t_j;
            }
        }
        else
        {
            str[j - 1] = S2[j - 1];
            i--;
            j--;
        }
    }

    for (int i = 0; i < len2; i++)
    {
        if (str[i])
        {
            printf("%c", str[i]);
        }
    }

    return 0;
}