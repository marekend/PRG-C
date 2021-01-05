//7. Časový údaj zadaný v dnech a hodinách převeďte na hodiny.

#include <stdio.h>

int main()
{
    int D;
    int H;

    scanf("%i", &D);
    scanf("%i", &H);

    printf("%i", D * 24 + H);
    return 0;
}