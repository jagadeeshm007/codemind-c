#include<stdio.h>
int main()
{
    int a[3],b[3],i,al=0,bob=0;
    for(i=0;i<3;i++)
        scanf("%d",&a[i]);
    for(i=0;i<3;i++)
        scanf("%d",&b[i]);
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
            al++;
        if(a[i]<b[i])
            bob++;
    }
    printf("%d %d",al,bob);
}