#include <stdio.h>
#include <string.h>

char old[1000];
char new[1000];

void calc()
{
    memset(new, 0, 1000);
    int op = 0, np = -1;
    while (op < strlen(old))
    {
        new[++np] = old[op];
        int cnt = 0;
        do
        {
            cnt++;
            op++;
        } while (op < strlen(old) && new[np] == old[op]);
        new[++np] = '0' + cnt;
    }
    strncpy(old, new, 1000);
}

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);

    old[0] = '1';
    for (int i = 1; i <= b; i++)
    {
        if (i >= a)
        {
            for (int j = 0; j < strlen(old); j++)
            {
                printf("%c ", old[j]);
            }
            printf("\n");
        }
        calc();
    }

    return 0;
}