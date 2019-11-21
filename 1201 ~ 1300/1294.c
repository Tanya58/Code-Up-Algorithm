#include <stdio.h>

int main()
{
    char letter = 0;
    while (scanf("%c", &letter) != EOF)
    {
        if (letter != ' ')
        {
            letter += 3;
            if (letter > 'z')
            {
                letter -= 'z' - 'a' + 1;
            }
        }
        printf("%c", letter);
    }
    return 0;
}