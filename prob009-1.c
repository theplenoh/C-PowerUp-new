#include <stdio.h>

int main()
{
    int n;
    int i;
    int sum=0;

    while(1)
    {
        fputs("n: ", stdout);
        scanf("%d", &n);
        if(n < 1)
            fputs("1이상의 정수를 입력해야 합니다.\n", stdout);
        else
            break;
    }

    for(i=1; i<=n; i++)
        sum+=i;

    printf("sum: %d\n", sum);

    return 0;
}
