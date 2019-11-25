#include <stdio.h>
int main(void)
{
    int x,y,z;
    for(x=0;x<=100;x++)
    for(y=0;y<=100;y++)
    for(z=0;z<=100;z++)
    {
        if(x*5+y*3+z/3==100&&z%3==0&&x+y+z==100)
        printf("¹«¼¦=%d Ä¸¼¦=%d Ð¡¼¦=%d",x,y,z);
    }
        
    
    return 0;
}