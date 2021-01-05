//Časový údaj zadaný v hodinách převeďte na dny a hodiny.

#include <stdio.h>

int main()
{
    int H;
    scanf("%i", &H);

    int D;

    while(H >= 24)
    {
        H -= 24;
        D++;
    }

    printf("%i d., %i h.", D, H);
    return 0;
}