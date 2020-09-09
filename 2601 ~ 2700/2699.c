#include <stdio.h>
#include <string.h>

char slang[1000];
char standard[1000];

int chk[1001][1001];
int main()
{
    scanf("%s", slang);
    getchar();
    scanf("%s", standard);

    int len1 = strlen(slang), len2 = strlen(standard);
    for (int i = 0; i < len1; i++)
    {
        for (int j = 0; j < len2; j++)
        {
            if (slang[i] == standard[j])
            {
                chk[i + 1][j + 1] = chk[i][j] + 1;
            }
            else
            {
                chk[i + 1][j + 1] = chk[i + 1][j] > chk[i][j + 1] ? chk[i + 1][j] : chk[i][j + 1];
            }
        }
    }
    printf("%d", chk[len1][len2]);
    return 0;
}