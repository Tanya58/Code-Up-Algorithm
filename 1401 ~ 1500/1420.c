#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    int score;
} type_student;

int main()
{
    int n = 0;
    type_student students[50] = {0};
    
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%s %d", students[i].name, &students[i].score);
    }
    
    type_student tmp;
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1; j++) {
            if (students[j].score > students[j+1].score) {
                memcpy(&tmp, &students[j], sizeof(type_student));
                memcpy(&students[j], &students[j+1], sizeof(type_student));
                memcpy(&students[j+1], &tmp, sizeof(type_student));
            }
        }
    }
    
    printf("%s", students[n-3].name);

    return 0;
}

