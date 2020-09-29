#include <stdio.h>
#include <string.h>

int lcs[1001][1001];

int Max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    char S1[1000] = {0}, S2[1000] = {0};
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
    printf("%d", lcs[len1][len2]);

    return 0;
}