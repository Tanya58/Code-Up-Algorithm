#include <stdio.h>

int main()
{
    char data[2001] = {0};
    fgets(data, 2000, stdin);
    printf("%s",data);
    return 0;
}