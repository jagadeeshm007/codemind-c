#include<stdio.h>
int main()
{
    int m,n,k=0,i,j;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        k=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                k++;
            }
        }
        if(k==2)
        {
            printf("%d
",i);
        }
    }
}