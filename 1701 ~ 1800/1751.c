#include <stdio.h>
#include <string.h>

int main()
{
    char str[1001] = {0};
    scanf("%[^\n]", str);

    printf("%d", strlen(str));

    return 0;
}