#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isMalware(char *p)
{
    int len = strlen(p);
    if (len < 4)
    {
        return 1;
    }

    for (int i = 0; i <= len - 3; i++)
    {
        if (strncmp(p + i, "tap", strlen("tap")) == 0)
        {
            return 1;
        }
    }

    for (int i = 0; i <= len - 6; i++)
    {
        if (strncmp(p + i, "xocure", strlen("xocure")) == 0)
        {
            return 1;
        }
    }

    return 0;
}

int main()
{
    int n = 0;
    scanf("%d\n", &n);

    char program[100][50] = {0};
    for (int i = 0; i < n; i++)
    {
        gets(program[i]);
    }

    int malware = 0;
    for (int i = 0; i < n; i++)
    {
        if (isMalware(program[i]))
        {
            malware++;
            printf("%s\n", program[i]);
        }
    }

    printf("%s", malware > 6 ? "danger" : malware > 3 ? "warning" : "safe");

    return 0;
}