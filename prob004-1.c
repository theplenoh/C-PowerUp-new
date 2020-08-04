#include <stdio.h>
#define TRUE 1
#define FALSE 0

void clean_stdin()
{
    int c;
    do {
        c = getchar();
    } while(c != '\n' && c != EOF);
}

int main()
{
    char ch;
    int cnt=0;

    while(TRUE)
    {
        printf("Data Input (EOF to exit): ");
        ch=getchar();
        if(ch == EOF)
            break;
        clean_stdin();
        cnt++;
    }
    puts("");
    printf("입력된 문자의 수: %d\n", cnt);

    return 0;
}
