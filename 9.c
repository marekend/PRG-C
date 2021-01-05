//Máte zadané x a y. Určete, je-li splněna podmínka: 4x + 3 < 5y – 1.

#include <stdio.h>

int main()
{
    int x;
    int y;

    scanf("%i", &x);
    scanf("%i", &y);

    x = 4 * x + 3;
    y = 5 * y - 1;

    if (x < y)
    {
        printf("Podminka je splnena");
    }
    else if (x > y)
    {
        printf("Podminka neni splnena");
    }

    return 0;
}