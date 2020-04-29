#include <stdio.h>
#include <string.h>

typedef struct Extension
{
    char extension[10];
    char program_name[100];
} t_extension;

int main()
{
    t_extension List[] = {
        {".dib", "Paint.Picture"},
        {".doc", "Word.Document.8"},
        {".docx", "Word.Document.12"},
        {".htm", "htmfile"},
        {".html", "htmlfile"},
        {".hwp", "Hwp.Document.96"},
        {".hwpx", "Hwp.Document.hwpx.96"},
        {".hwt", "Hwp.Document.hwt.96"},
        {".jpe", "jpegfile"},
        {".jpeg", "jpegfile"},
        {".jpg", "jpegfile"},
        {".ppt", "PowerPoint.Show.8"},
        {".pptx", "PowerPoint.Show.12"},
        {".pptxml", "powerpointxmlfile"}};

    char idx = 0;
    char p_name[100] = {0};
    scanf("%s", p_name);

    for (int i = strlen(p_name) - 1; i >= 0; i--)
    {
        if (p_name[i] == '.')
        {
            idx = i;
            break;
        }
    }

    for (int i = 0; i < sizeof(List) / sizeof(t_extension); i++)
    {
        if (strcmp(p_name + idx, List[i].extension) == 0)
        {
            printf("%s", List[i].program_name);
        }
    }

    return 0;
}