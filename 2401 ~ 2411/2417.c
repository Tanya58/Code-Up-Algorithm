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

int compare(const void *a, const void *b)
{
    t_student *s1 = (t_student *)a;
    t_student *s2 = (t_student *)b;

    return strcmp(s1->name, s2->name);
}

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

    qsort(Database, n, sizeof(t_student), compare);

    int rank[150] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < Database[i].friends_num; j++)
        {
            int idx = getIdxByName(Database[i].friends[j]);
            if (idx >= 0)
            {
                rank[idx]++;
            }
        }
    }

    int len = 1;
    int max[150] = {0};
    for (int i = 1; i < n; i++)
    {
        if (rank[max[0]] < rank[i])
        {
            memset(max, 0, sizeof(max));
            max[0] = i;
            len = 1;
        }
        else if (rank[max[0]] == rank[i])
        {
            max[len++] = i;
        }
    }

    for (int i = 0; i < len; i++)
    {
        printf("%s\n", Database[max[i]].name);
    }

    return 0;
}