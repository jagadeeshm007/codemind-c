#include<stdio.h>
int main()
{
    int n,t,i,c=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(ar[i]<=t)
        c++;
        if(ar[i]>t)
        c=c+2;
    }
    printf("%d",c);
}