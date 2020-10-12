#include <stdio.h>
#include <string.h>

int main()
{
    char name[20] = {0};
    scanf("%s", name);

    for (int i = 0; i < strlen(name); i++)
    {
        printf("+-");
    }
    printf("+\n");

    for (int i = 0; i < strlen(name); i++)
    {
        printf("|%c", name[i]);
    }
    printf("|\n");

    for (int i = 0; i < strlen(name); i++)
    {
        printf("+-");
    }
    printf("+");

    return 0;
}