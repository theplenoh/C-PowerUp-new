#include <stdio.h>
#include <string.h>

char* strTok(char* str, const char d[])
{
    static int cursor;
    int tokenIdx;

    tokenIdx = cursor;

    if(str[cursor] == '\0')
        return NULL;

    while(1)
    {
        if(str[cursor] == *d)
        {
            printf("in if: cursor: %i\n", cursor);
            str[cursor] = '\0';
            break;
        }
        cursor++;
    }
    cursor++;

    printf("before return: cursor: %i\n", cursor);
    return &(str[tokenIdx]);
}

int main()
{
    char str[]="010-2222-3333";
    char* delim="-";
    char* token;

    token=strTok(str, delim);

    while(token!=NULL)
    {
        puts(token);
        token=strTok(str, delim);
    }

    return 0;
}
