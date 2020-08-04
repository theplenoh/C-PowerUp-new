#include <stdio.h>

int main()
{
    int choice;
    int i, j;

    while(1)
    {
        fputs("홀수 단(1), 짝수 단(2): ", stdout);
        scanf("%d", &choice);
        if(choice == 1 || choice == 2)
            break;

        fputs("잘못된 입력입니다. 1 또는 2만 입력하세요.", stdout);
    }

    for(i=(choice == 1)? 3:2; i<=9; i+=2)
    {
        for(j=1; j<=9; j++)
        {
            printf("%d x %d == %d\n", i, j, i*j);
        }
        fputs("", stdout);
    }

    return 0;
}
