#include<stdio.h>
int main()
{
    int n,i,j,t,s,temp,d,c=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&t,&s);
            if(t<s)
            {
                for(j=t;j<=s;j++)
                {
                    while(j)
                    {
                    d=j%10;
                    break;
                    }
                    if(d==9 || d==2 || d==3)
                    {
                        c++;
                    }
                }
                printf("%d
",c);
                c=0;
        }
    }
}