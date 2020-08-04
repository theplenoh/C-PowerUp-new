#include <stdio.h>
#include <ctype.h>
#define STR_MAX 100

int strLen(const char* str)
{
    int i;
    for(i=0; str[i]!='\0'; i++);
    return i;
}
int strCpy(char* dest, const char* source)
{
    int i;
    for(i=0; source[i]!='\0'; i++)
        dest[i] = source[i];

    dest[i] = '\0';
    return i;
}
int strCat(char* dest, const char* source)
{
    int i, j;
    int destCnt, srcCnt;

    destCnt = strLen(dest);
    srcCnt = strLen(source);

    for(i=destCnt, j=0; j<srcCnt; i++, j++)
        dest[i] = source[j];
    return i;
}
int strCmp(const char* str1, const char* str2)
{
    int i, cnt=0;
    if(tolower(str1[0]) > tolower(str2[0]))
        return 1;
    else if(tolower(str1[0]) < tolower(str2[0]))
        return -1;
    else
    {
        for(i=0; str1[i]!='\0'; i++)
        {
            if(str1[i] == str2[i])
                cnt++;
        }
        if(cnt == strLen(str1))
            return 0;
    }
}

int main()
{
    char str1[STR_MAX] = "Good morning?";
    char str2[STR_MAX] = "HaHaHa!";
    char buffString[STR_MAX];

    printf("length of \"%s\": %d\n", str1, strLen(str1));
    printf("length of \"%s\": %d\n", str2, strLen(str2));

    strCpy(buffString, str1);
    printf("copy string: \"%s\"\n", buffString);

    strCat(buffString, str2);
    printf("concat string: \"%s\" \n", buffString);

    printf("cmp str1, str1: %d\n", strCmp(str1, str1));
    printf("cmp str2, str2: %d\n", strCmp(str2, str2));
    printf("cmp str1, str2, %d\n", strCmp(str1, str2));
    printf("cmp str2, str1, %d\n", strCmp(str2, str1));

    return 0;
}
