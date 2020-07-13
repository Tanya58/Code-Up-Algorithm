#include <stdio.h>
#include <string.h>

int main()
{
    char path1[1002] = {0}, path2[1002] = {0};
    scanf("%s %s", path1, path2);

    int rp = 0; // root pointer
    for (int i = 0; i < strlen(path1) || i < strlen(path2); i++)
    {
        if (path1[i] != path2[i])
        {
            break;
        }
        if (path1[i] == '/')
        {
            rp = i + 1;
        }
    }

    int cnt = 0;
    for (int i = rp; i < strlen(path1); i++)
    {
        if (path1[i] == '/')
        {
            printf("../");
            cnt++;
        }
    }
    if (cnt == 0)
    {
        printf("./");
    }
    printf("%s", path2 + rp);
    return 0;
}