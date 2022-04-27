#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,d=0;
    int s=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    while(n--)
    {
        s=s+(ar[n]*pow(2,d));
       // printf("%d ",s);
        d++;
    }
    printf("%d",s);
}