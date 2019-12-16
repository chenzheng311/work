#include <stdio.h>
int main()
{
    int a[10];
    int i, j, m;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        m = a[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (m < a[j])
            {
                a[j + 1] = m;
                break;
            }
            a[j + 1] = a[j];
        }
        if (m > a[0])
            a[0] = m;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%3d", a[i]);
    }
}