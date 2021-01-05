//Vypište druhé mocniny čísel od 1 do 1024 pomocí cyklu a dvou proměnných.

#include <stdio.h>
#include <math.h>

int main()
{   
    int i;
    int o = 2;

    for (i = 1; i <= 1024; i++)
    {
        printf("%7i\n", (int)pow(i,o));

    }
    return 0; 
}