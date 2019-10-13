#include <stdio.h>

int main()
{
    int code1 = 0, code2 = 0;
    scanf("%06d-%07d", &code1, &code2);
    printf("%06d%07d", code1, code2);
    return 0;
}