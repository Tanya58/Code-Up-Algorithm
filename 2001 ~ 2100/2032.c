#include <stdio.h>
#include <string.h>

int main()
{
    char n[6] = {0};
    scanf("%s", n);

    double real = 0, t = 0.1;
    for (int i = 0; i < strlen(n); i++)
    {
        real += (n[i] - '0') * t;
        t *= 0.1;
    }

    for (int i = 0; i < 10; i++)
    {
        real *= 2;
        printf("%d", (int)real);
        if (real > 1)
        {
            real--;
        }
    }
}