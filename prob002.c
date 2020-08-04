#include <stdio.h>
#define STR_LEN 50

int main()
{
    char name[STR_LEN];

    fputs("문자열 입력: ", stdout);
    fgets(name, STR_LEN, stdin);

    fputs("입력된 문자열: ", stdout);
    fputs(name, stdout);

    return 0;
}
