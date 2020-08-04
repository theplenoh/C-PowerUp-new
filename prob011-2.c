#include <stdio.h>

int main()
{
    int n;
    int i;
    int sum=0;

    do {
        fputs("n 입력(2이상만): ", stdout);
        scanf("%d", &n);
    } while(n<2);

    i=1;
    while(sum<=n)
    {
        sum+=i;
        i++;
    }
    i--;

    printf("%d을(를) 더할 때 처음 %d을(를) 넘기 시작한다.\n", i, n);
    printf("%d을(를) 넘기기 이전의 합: %d\n", n, sum-i);
    printf("%d을(를) 넘은 이후의 합: %d\n", n, sum);

    return 0;
}
