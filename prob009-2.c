#include <stdio.h>

int main()
{
    int n1, n2;
    int i;
    int sum=0;

    fputs("두 개의 정수 입력: ", stdout);
    scanf("%d %d", &n1, &n2);
    if(n1 > n2)
    {
        int tmp;
        tmp = n1;
        n1 = n2;
        n2 = tmp;
    }

    for(i=n1; i<=n2; i++)
        sum+=i;
    
    printf("sum: %d\n", sum);
}
