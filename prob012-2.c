#include <stdio.h>

int main()
{
    int n;
    int i, j, k;

    fputs("정수 입력: ", stdout);
    scanf("%d", &n);

    for(i=0; i<=100; i++)
    {
        for(j=0; j<=100; j++)
        {
            for(k=0; k<=100; k++)
            {
                if(i*j-k == n)
                    printf("%d x %d - %d = %d\n", i, j, k, i*j-k);
            }
        }
    }

    return 0;
}
