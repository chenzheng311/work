#include <stdio.h>
int main(void)
{
    float a = 1, i, m = 0, pai;
    int n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        m = m + 1.0 / a;
        if (a > 0)
        {
            a = -(a + 2);
        }
        else
        {
            a = (-a + 2);
        }
    }
    pai = 4 * m;
    printf("pai=%f", pai);
    return 0;
}
