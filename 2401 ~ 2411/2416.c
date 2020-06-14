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

t_student *findStudent(t_student *arr, int len, char *search)
{
    for (int i = 0; i < len; i++)
    {
        if (strcmp(arr[i].name, search) == 0)
        {
            return &arr[i];
        }
    }
    return &arr[0];
}

int main()
{
    int n = 0;
    scanf("%d", &n);

    char tmp[100] = {0};
    t_student *students = (t_student *)malloc(sizeof(t_student) * n);
    for (int i = 0; i < n; i++)
    {
        memset(tmp, 0, sizeof(tmp));
        scanf("%s", tmp);

        char *ptr = strtok(tmp, ",");
        strcpy(students[i].name, ptr);
        ptr = strtok(NULL, ",");
        students[i].gender = *ptr;
        ptr = strtok(NULL, ",");
        students[i].age = atoi(ptr);

        int no = 0;
        while ((ptr = strtok(NULL, ",")) != NULL)
        {
            strcpy(students[i].friends[no++], ptr);
        }
        students[i].friends_num = no;
    }

    char search[10] = {0};
    scanf("%s", search);

    t_student *whos_friend = 0;
    t_student *who = findStudent(students, n, search);
    int male = 0, female = 0;
    for (int i = 0; i < who->friends_num; i++)
    {
        whos_friend = findStudent(students, n, who->friends[i]);
        if (whos_friend->gender == 'M')
        {
            male++;
        }
        if (whos_friend->gender == 'F')
        {
            female++;
        }
    }

    printf("%d\n%d", male, female);

    free(students);
    return 0;
}