#include <stdio.h>

int main()
{
    int input, check;
    int i;

    while(1)
    {
        fputs("1이상의 정수 입력: ", stdout);
        check = scanf("%d", &input);
        if(check == EOF)
        {
            fputs("\nEOF입력에 의해 프로그램을 종료합니다.\n", stdout);
            break;
        }
        if(input < 1)
        {
            fputs("1이상의 입력을 필요로 합니다. 다시 입력하세요.\n\n", stdout);
            continue;
        }

        printf("%d의 약수들\n", input);
        for(i=1; i<=input; i++)
        {
            if(!(input%i))
                printf("%d ", i);
        }
        printf("\n\n");
    }


    return 0;
}
