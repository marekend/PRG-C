//Vypište po sobě jdoucí čísla oddělená čárkou ze zadaného intervalu určeného na vstupu programu.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int start;
    scanf("%i", &start);

    int end;
    scanf("%i", &end);

    for(start; start <= end; start++)
    {
        printf("%i, ", start);
    }
   
    return 0;
}