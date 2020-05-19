#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *f = fopen("secret.dic", "r");

    char t = 0;
    while ((t = fgetc(f)) != EOF)
    {
        printf("%c", t);
    }

    fclose(f);

    return 0;
}