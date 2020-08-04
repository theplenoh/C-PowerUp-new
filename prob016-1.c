#include <stdio.h>

#define SZ 256

void alterCases(char str[])
{
    int i;
    int diff = 'a' - 'A';

    for(i=0; str[i]!='\0'; i++)
    {
        if('a' <= str[i]&&str[i] <= 'z')
            str[i] -= diff;
        else if('A' <= str[i]&&str[i] <= 'Z')
            str[i] += diff;
    }

}

int main()
{
    char str[SZ];

    puts("문자열입력: ");
    fgets(str, SZ, stdin);

    alterCases(str);

    puts(str);

    return 0;
}
