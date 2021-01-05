//Do konzole vypište šachovnici z „0“ a „1“ o velikosti 8x8 znaků.

#include <stdio.h>

int main()
{
    int i;
    for(i = 0; i <= 7; i++)
    {
        if (i % 2 == 0)
        {
            printf("0 1 0 1 0 1 0 1\n");
        }
        else if (i % 2 == 1)
        {
            printf("1 0 1 0 1 0 1 0\n");
        }        
    }
    return 0;
}
