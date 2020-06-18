#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
    char name[20];
    char gender;
    int age;
    int friends_num;
    char friends[10][10];

} t_student;

int n = 0;
t_student Database[150];

int getIdxByName(char *name)
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(Database[i].name, name) == 0)
            return i;
    }
    return -1;
}

int main()
{
    scanf("%d", &n);

    char tmp[100] = {0};
    for (int i = 0; i < n; i++)
    {
        memset(tmp, 0, sizeof(tmp));
        scanf("%s", tmp);

        char *ptr = strtok(tmp, ",");
        strcpy(Database[i].name, ptr);
        ptr = strtok(NULL, ",");
        Database[i].gender = *ptr;
        ptr = strtok(NULL, ",");
        Database[i].age = atoi(ptr);

        int no = 0;
        while ((ptr = strtok(NULL, ",")) != NULL)
        {
            strcpy(Database[i].friends[no++], ptr);
        }
        Database[i].friends_num = no;
    }

    char search[10] = {0};
    scanf("%s", search);

    int who = getIdxByName(search);
    int alram[150] = {0};
    alram[who] = 1;
    for (int i = 0; i < Database[who].friends_num; i++)
    {
        int who2 = getIdxByName(Database[who].friends[i]);
        alram[who2] = 1;
        for (int j = 0; j < Database[who2].friends_num; j++)
        {
            int tmp = getIdxByName(Database[who2].friends[j]);
            alram[tmp] = 1;
        }
    }

    int cnt = -1;
    for (int i = 0; i < n; i++)
    {
        if (alram[i])
        {
            cnt++;
        }
    }

    printf("%d", cnt);

    return 0;
}