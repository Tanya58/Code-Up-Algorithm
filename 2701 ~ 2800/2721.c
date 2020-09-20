#include <stdio.h>
#include <string.h>

int main()
{
    char S1[21] = {0}, S2[21] = {0}, S3[21] = {0};
    scanf("%s %s %s", S1, S2, S3);
    printf("%s", S1[strlen(S1) - 1] == S2[0] && S2[strlen(S2) - 1] == S3[0] && S3[strlen(S3) - 1] == S1[0] ? "good" : "bad");
    return 0;
}