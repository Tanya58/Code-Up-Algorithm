#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Member
{
    char name[51];
    char m[10];
    char d[5];
} t_member;

int getMonth(char *str)
{
    char Months[12][10] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    for (int i = 0; i < 12; i++)
    {
        if (strncmp(str, Months[i], strlen(Months[i])) == 0)
        {
            return i + 1;
        }
    }
    return 0;
}

int getDay(char *str)
{
    int n = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            n *= 10;
            n += str[i] - '0';
        }
    }
    return n;
}

int main()
{
    int n = 0;
    scanf("%d", &n);

    t_member *M = (t_member *)malloc(sizeof(t_member) * n);
    memset(M, 0, sizeof(t_member) * n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s %s %s", M[i].name, M[i].m, M[i].d);
    }

    int year = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (getMonth(M[i].m) > getMonth(M[i + 1].m))
        {
            year++;
        }
        else if (getMonth(M[i].m) == getMonth(M[i + 1].m))
        {
            if (getDay(M[i].d) > getDay(M[i + 1].d))
            {
                year++;
            }
        }
    }

    printf("%s is %d %s older than %s.", M[0].name, year, year == 1 ? "year" : "years", M[n - 1].name);

    free(M);

    return 0;
}