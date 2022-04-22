#include<stdio.h>
int main()
{
    int n,i,s,k,tn=1,tm=0;
    scanf("%d",&n);
    printf("0 ");
    for(i=0;i<n-1;i++)
    {
       s=tn+tm;
       tn=tm;
       tm=s;
       printf("%d ",s);
    }
}