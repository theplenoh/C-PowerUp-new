#include <stdio.h>

int main()
{
    char ch;
    int n;
    double lf;
    char str[50];

    printf("[문자, 정수, 실수, 문자열]의 포맷으로 입력: ");
    scanf("%c, %d, %lf, %s", &ch, &n, &lf, str);

    printf("입력된 데이터 출력: %c, %d, %f, %s\n", ch, n, lf, str);

    return 0;
}
