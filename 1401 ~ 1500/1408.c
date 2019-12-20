#include <stdio.h>
#include <string.h>

int main()
{
    char password[20] = {0};
    scanf("%s", password);

    char encrypt1[20] = {0};
    char encrypt2[20] = {0};
    for (int i = 0; i < strlen(password); i++)
    {
        encrypt1[i] = password[i] + 2;
        encrypt2[i] = (password[i] * 7) % 80 + 48;
    }
    puts(encrypt1);
    puts(encrypt2);
    return 0;
}