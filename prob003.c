#include <stdio.h>

int main()
{
    int n1, n2;

    printf("두 수를 16진수로 입력: ");
    scanf("%x %x", &n1, &n2);

    printf("연산 결과 8진수: %o\n", n1+n2);
    printf("연산 결과 10진수: %d\n", n1+n2);
    printf("연산 결과 16진수: %x\n", n1+n2);

    return 0;
}
