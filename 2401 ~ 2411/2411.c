#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
    char name[20];
    char gender;
    int age;
    int friends_num;
    char friends[10][20];

} t_student;

int main()
{
    int n = 0;
    scanf("%d", &n);

    char tmp[100] = {0};
    t_student students[150] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%s", tmp);

        char *ptr = strtok(tmp, ",");
        strncpy(students[i].name, ptr, strlen(ptr));
        ptr = strtok(NULL, ",");
        students[i].gender = *ptr;
        ptr = strtok(NULL, ",");
        students[i].age = atoi(ptr);
        ptr = strtok(NULL, ",");

        int no = 0;
        while (ptr != NULL)
        {
            strncpy(students[i].friends[no++], ptr, strlen(ptr));
            ptr = strtok(NULL, ",");
        }
        students[i].friends_num = no;
    }

    int male = 0, female = 0;
    for (int i = 0; i < n; i++)
    {
        if (students[i].gender == 'M')
        {
            male++;
        }

        if (students[i].gender == 'F')
        {
            female++;
        }
    }

    printf("%d\n%d", male, female);

    return 0;
}