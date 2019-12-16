#include<stdio.h>
int main()
{
    int a[10]={0};
    int i,j,k;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        k=a[i];
        for(j=i-1;j>=0;j--)
        {
            if(k>a[j])
            {a[j+1]=k;break;}
            a[j+1]=a[j];
        }
        if(k<a[0])
        a[0]=k;
    }
    for(i=0;i<10;i++)
    printf("%3d",a[i]);
    return 0;
}