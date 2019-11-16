#include <stdio.h>
int main(void)
{
    int x,y,z=1,m=0;
    scanf("%d",&y);
    for(x=1;x<=y;x++){
       z=x*z;
       m=m+z;
    }
    printf("%d",m);
    return 0;

}