#include <stdio.h>

int main()
{
    char letter = 0;
    while (letter != 'q')
    {
        scanf("%c ", &letter);
        printf("%c\n", letter);
    }
    return 0;
}