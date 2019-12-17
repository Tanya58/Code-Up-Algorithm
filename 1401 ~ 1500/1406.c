#include <stdio.h>
#include <string.h>

int main()
{
    char buf[10000] = {0};
    scanf("%s", buf);

    if (!strncmp(buf, "love", strlen(buf)))
    {
        printf("I love you.");
    }

    return 0;
}