#include <stdio.h>
#include <string.h>
#define STR_MAX 100

int charCount(const char* str, const char ch)
{
    int len=strlen(str);
    int charCnt;
    int i;

    for(i=0; i<len; i++)
    {
        if(str[i] == ch)
            charCnt++;
    }

    return charCnt;
}

int main()
{
    char myStr[STR_MAX];
    char ch;
    int cnt;

    printf("myStr: ");
    fgets(myStr, STR_MAX, stdin);
    printf("ch: ");
    scanf("%c", &ch);

    cnt = charCount(myStr, ch);

    printf("'%c'의 개수: %d\n", ch, cnt);

    return 0;
}
