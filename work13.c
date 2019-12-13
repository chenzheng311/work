#include <stdio.h>
#define n 10
int findmin(int a[n])
{

    int i, x, y, z;
    x = a[0];
    for (i = 0; i <= n; i++)
    {

        y = a[i + 1];
        if (x > y)
        {
            z = y;
        }
        else
        {
            z = x;
        }
        x = z;
    }
    return z;
}
int main()
{
    int m;
    int a[n];
    for (m = 0; m < n; m++)
    {
        scanf("%d", &a[m]);
    }
    printf("min=%d  ", findmin(a));
}