//Generujte náhodné číslo z intervalu <30;80>.
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{
    srand(time(0));
    printf("%i", 30 + rand() % (80 + 1 - 30));
    return 0;
}