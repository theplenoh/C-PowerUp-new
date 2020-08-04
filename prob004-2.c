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
    int check;
    int input;
    int sum=0;

    while(TRUE)
    {
        printf("Data Input (EOF to exit): ");
        check = scanf("%d", &input);
        if(check == EOF)
            break;
        sum+=input;
    }
    puts("");
    printf("총합: %d\n", sum);

    return 0;
}
