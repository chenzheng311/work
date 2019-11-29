#include <stdio.h>
#include <math,h>
int main()
{
    int i,x,y;
    for(i=1;i<100;i++)
    {
        y=sqrt(i)
        for(x=2;x<=y;x++)
        if(i%x==0)
        break;
        if(x>y)
        printf("%d",i);
    }
}