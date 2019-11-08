#include <stdio.h>
int main(void)
{
    float x, m;
    int y;
    printf("行驶里程\n");
    scanf("%f", &x);
    printf("等待分钟\n");
    scanf("%d", &y);
    if (x <= 10)
    {
        if (x <= 3)
        {
            m = 10 + (y / 5 * 2);
        }
        else
        {
            m = 10 + (x - 3) * 2 + (y / 5 * 2);
        }
    }
    else
    {
        m = 10 + (10 - 3) * 2 + (x - 10) * 3 + (y / 5 * 2);
    }
    printf("车费为%.0f", m);
    return 0;
}