#include <stdio.h>
#include <string.h>

int main()
{
    char code[11] = {0};
    scanf("%s", code);

    getchar();

    char phone[20] = {0};
    scanf("%[^\n]s", phone);

    for (int i = 0; i < strlen(phone); i++)
    {
        if (phone[i] == ' ')
        {
            printf(" ");
            continue;
        }

        for (int t = 0; t < 10; t++)
        {
            if (phone[i] == code[t])
            {
                printf("%d", t);
                break;
            }
        }
    }

    return 0;
}
