#include<stdio.h>
int add(int n)
{
    int tem,s=0,p=n;
    while(p>9)
    {
        s=0;
        while(p!=0)
        {
           tem=p%10;
           s=s+tem;
           p=p/10;
        }
        if(s<9)
        {
            return s;
            break;
        }
        else
        {
            return add(s);
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d ",add(n));
}
