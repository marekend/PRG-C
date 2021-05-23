#include <stdio.h>
#include <string.h>

int main()
{
    char szScan[128];
    printf("Vstup: ");
    scanf("%s", &szScan);

    int iRLE = 1;

    for (int iCurrentChar = 0; iCurrentChar < strlen(szScan); iCurrentChar++)
    {
        if (szScan[iCurrentChar] == szScan[iCurrentChar + 1])
        {
            iRLE++;
            continue;
        }

        printf("%i%c", iRLE, szScan[iCurrentChar]);
        iRLE = 1;
    }

    return 0;
}