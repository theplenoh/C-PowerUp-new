#include <stdio.h>
#include <string.h>
#define SZ 5

int main()
{
    char arr[SZ][10];
    int i, j;
    char tmp[10];

    puts("[Input]");
    for(i=0; i<SZ; i++)
    {
        scanf("%s", &arr[i][0]);
    }

    for(i=0; i<SZ-1; i++)
    {
        for(j=0; j<SZ-i-1; j++)
        {
            if(strlen(arr[j]) > strlen(arr[j+1]))
            {
                strcpy(tmp, arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], tmp);
            }
        }
    }

    puts("[Result]");
    for(i=0; i<SZ; i++)
    {
        printf("%s\n", arr[i]);
    }

    return 0;
}
