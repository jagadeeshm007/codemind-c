#include<stdio.h>
int isp(int n)
{
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            return 0;
        }
        return 1;
}
int main()
{
    int n,i,c=0,j;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        for(j=2;j<n;j++)
        {
            if(i*j==n && isp(i)==1 && isp(j)==1)
            {
                c=1;
                break;
            }
        }
        if(c==1)
        {
            printf("%d %d",i,j);
            break;
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}