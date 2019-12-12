#include<stdio.h>
#define n 10
int findmin(int a[n])
{
    int min,i;
    min=a[1];
    for(i=0;i<n;i++)
    {
        if(min<a[i]){return min;} else {min=a[i]; return min;}
    }
}
int mian()
{
    int m,a[n];

    for(m=0;m<n;m++)
    { 
    scanf("%d",&a[m]);
     }
     printf("%d",findmin(a));
}