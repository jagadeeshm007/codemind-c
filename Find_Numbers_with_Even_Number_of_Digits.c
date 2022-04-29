#include<stdio.h>
int main()
{
    int n,i,j,p,t=0,c=0;
    int a[n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);   
    }
    for(i=0;i<n;i++)
    {
        t=0;
        p=a[i];
        while(p!=0)
        {
            p=p/10;
            t++;
        }
        if(t%2==0)
        {
            c++;
        }
    }
    printf("%d",c);
}