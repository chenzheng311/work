#include <stdio.h>
int main()
{
    int x, i;
    for (i = 2; i < 100; i++)
    {
        if (i % 2 == 0 && i / 2 != 1)
            continue;
        if (i % 3 == 0 && i / 3 != 1)
            continue;
        if (i % 5 == 0 && i / 5 != 1)
            continue;
        printf("%6d", i);
    }
    return 0;
}