#include <stdio.h>
#include <string.h>

int main()
{
    int count = 0;
    char *p = 0;
    char str[100] = {0};
    scanf("%[^\n]s", str);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 'a' - 'A';
    }

    p = strchr(str, 'c');
    while (p != NULL)
    {
        count++;
        p = strchr(p + 1, 'c');
    }
    printf("%d\n", count);

    count = 0;
    p = strstr(str, "cc");
    while (p != NULL)
    {
        count++;
        p = strstr(p + 1, "cc");
    }
    printf("%d\n", count);

    return 0;
}