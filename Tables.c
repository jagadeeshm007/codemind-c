#include<stdio.h>
int main()
{
    int a,b,t,i;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=1;i<=b;i++)
    {
        if(i%2==1)
        {
            t=a*i;
            printf("%d x %d = %d
",a,i,t);
        }
    }
}