#include <stdio.h>

int fac(const int n)
{
    if(n < 1)
        return -1;

    if(n == 1)
        return 1;
    else
        return n * fac(n-1);
}

int main()
{
    int result;
    int n;

    printf("숫자 입력(1이상): ");
    scanf("%d", &n);

    result = fac(n);
    if(result == -1)
        puts("입력이 잘못되어 예상치 못한 결과를 얻었습니다.");
    else
        printf("%d! = %d\n", n, result);

    return 0;
}
