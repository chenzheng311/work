#include <stdio.h>

int main(void)
{
    int a, n, sum, m, i;
    sum = 0;
    m = 0;
    printf("Enter a and n:");
    scanf("%d%d", &a, &n);
    for (i = 1; i <= n; i++)
    {
        m = m * 10 + a;
        sum = sum + m;
    }
    printf("sum is %d\n", sum);
    return 0;
}