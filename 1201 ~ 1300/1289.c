#include <stdio.h>

typedef struct _ground
{
    int width;
    int height;
} ground;

int main()
{
    ground object[3] = {0};
    int max_size = 0x80000000;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d", &object[i].width, &object[i].height);
        int size = object[i].width * object[i].height;
        if (max_size < size)
            max_size = size;
    }
    printf("%d", max_size);
    return 0;
}