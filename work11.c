#include <stdio.h>
int main()
{
    int x, y;
    for (x = 1; x < 5; x++)
    {
        for (y = 1; y < 16; y++)
            if (x == y || x == 8 - y || x + 8 == y || x == 16 - y)
                printf("w");
            else
                printf(" ");
        printf("\n");
    }
    return 0;
}