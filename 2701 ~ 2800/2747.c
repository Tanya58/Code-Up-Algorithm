#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct play
{
    int cnt;
    char name[1001];
} t_play;

int main()
{
    int m = 0;
    scanf("%d ", &m);

    int idx = 0;
    t_play *list = (t_play *)malloc(sizeof(t_play) * m);
    for (int i = 0; i < m; i++)
    {
        char tmp[1001] = {0};
        fgets(tmp, 1001, stdin);
        tmp[strlen(tmp) - 1] = '\0';

        for (int j = 0; j <= idx; j++)
        {
            if (j == idx)
            {
                idx++;
                list[j].cnt = 1;
                strncpy(list[j].name, tmp, 1001);
                break;
            }
            else if (strncmp(list[j].name, tmp, 1001) == 0)
            {
                list[j].cnt++;
                break;
            }
        }
    }

    for (int i = 0; i < idx; i++)
    {
        printf("%d %s : %d\n", i + 1, list[i].name, list[i].cnt);
    }

    free(list);

    return 0;
}