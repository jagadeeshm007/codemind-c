#include<stdio.h>
int sum(int a)
{
    int temp,i,s=0;
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            s=s+i;
        }
    }
    return s;
}
int main()
{
    int n,m,i,c=0;
    scanf("%d%d",&n,&m);
    int a=sum(n);
    int b=sum(m);
    if(a==m&&b==n)
    {
        printf("Amicable");
    }
    else
    printf("Not Amicable");
}