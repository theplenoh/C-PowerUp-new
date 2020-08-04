#include <stdio.h>

int main()
{
    char ch;
    int diff= 'a' - 'A';

    while((ch=getchar())!='\n')
    {
        if('a' <= ch&&ch <= 'z')
            putchar(ch-diff);
        else if('A' <= ch&&ch <= 'Z')
            putchar(ch+diff);
        else
            putchar(ch);
    }
    puts("");

    return 0;
}
