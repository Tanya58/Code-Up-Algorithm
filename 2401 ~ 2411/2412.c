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

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += students[i].age;
    }
    printf("%.2lf", (double)sum / n);
    free(students);
    return 0;
}