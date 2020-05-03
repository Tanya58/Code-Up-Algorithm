#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str = malloc(sizeof(char) * 100);
    int a = 0, b = 0;

    scanf("%s", str);
    scanf("%d %d", &a, &b);

    for (int i = a - 1; i < b; i++)
    {
        printf("%c", *(str + i));
    }

    free(str);

    return 0;
}