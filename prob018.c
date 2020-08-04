#include <stdio.h>
#include <string.h>
#define SZ 4

int main()
{
    char str1[20];
    char str2[20];
    char str3[20];
    char str4[20];
    char strBlank[80];
    char* strPtr[4] = {str1, str2, str3, str4};
    char* tmpPtr;
    int i, j;

    puts("[Input]");
    for(i=0; i<SZ; i++)
    {
        scanf("%s", strPtr[i]);
    }

    for(i=0; i<SZ-1; i++)
    {
        for(j=0; j<SZ-i-1; j++)
        {
            if(*strPtr[j]>*strPtr[j+1])
            {
                tmpPtr = strPtr[j];
                strPtr[j] = strPtr[j+1];
                strPtr[j+1] = tmpPtr;
            }
        }
    }

    for(i=0; i<SZ; i++)
    {
        strcat(strPtr[i], " ");
        strcat(strBlank, strPtr[i]);
    }
    puts(strBlank);

    return 0;
}
