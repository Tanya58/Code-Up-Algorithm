#include <stdio.h>
#include <string.h>

int main()
{
    char input[101] = {0};
    scanf("%s", input);

    for (int i = 0; i < strlen(input); i++)
    {
        printf("%c", input[i++]);
        while (input[i] != ',' && input[i] != '\0')
        {
            i++;
        }
    }
    return 0;
}