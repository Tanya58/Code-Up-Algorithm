#include <stdio.h>

int main()
{
    char buf[31] = {0};
    fgets(buf, 31, stdin);
    printf("%s", buf);
    return 0;
}