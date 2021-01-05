//Vypište druhé mocniny čísel od 1 do 1024 pomocí cyklu a jedné proměnné.

#include <stdio.h>
#include <math.h>

int main()
{   
    int i;

    for (i = 1; i <= 1024; i++)
    {
        printf("%i\n", (int)pow(i, 2));
    }
    return 0; 
}