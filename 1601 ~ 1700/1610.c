#include <stdio.h>
#include <string.h>

char *mysubstr(char *str, int start, int end)
{
    *(str + start + end) = 0x00;
    return str + start;
}

int main()
{
    char str[101] = {0};
    scanf("%s", str);

    int start = 0, end = 0;
    scanf("%d %d", &start, &end);

    printf("%s", mysubstr(str, start, end));

    return 0;
}