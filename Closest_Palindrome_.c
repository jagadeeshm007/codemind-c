#include<stdio.h>
int pal(int n)
{
    int k=n,t=0,e=0;
    while(k)
    {
        t=k%10;
        e=(e*10)+t;
        k=k/10;
    }
    if(n==e)
        return 1;
    else
        return 0;
}
int main()
{
    int n,i,c=1,j=1;
    scanf("%d",&n);
    int a=n+1;
    int b=n-1;
    while(c!=0 && j!=0)
    {
        if(pal(a)==1)
        {
            c=0;
        }
        else
        {
            a++;
        }
        if(pal(b)==1)
        {
            j=0;
        }
        else
        {
            b--;
        }
    }
    //printf("%d %d",a,b);
    if(a-n>n-b)
    {
        printf("%d",b);
    }
    else if(a-n<n-b)
    {
        printf("%d",a);
    }
    else if(a-n==n-b)
    {
        printf("%d %d",b,a);
    }
}