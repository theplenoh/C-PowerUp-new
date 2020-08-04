#include <stdio.h>

int divInt(int dividend, int divisor, int* resultArr)
{
    if(divisor==0)
        return -1;

    resultArr[0] = dividend / divisor;
    resultArr[1] = dividend % divisor;

    return 0;
}

int main()
{
    int dd;
    int ds;
    int result[2];
    int returnCode;

    while(1)
    {
        printf("나눗셈을 위한 두 정수 입력: ");
        scanf("%d %d", &dd, &ds);

        returnCode = divInt(dd, ds, result);
        if(returnCode == -1)
        {
            printf("0으로 나누는 오류발생! 숫자 재입력\n\n");
            continue;
        }

        printf("몫: %d, 나머지: %d\n\n", result[0], result[1]);
        break;
    }

    return 0;
}
