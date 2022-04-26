#include <stdio.h>
int main()
{
    int a,b,i,r;
    scanf("%d %d", &a, &b);
    int max;
    if(a>b)
    max=b;
    else
    max=a;
    while(1)
    {
        if(max%a==0 && max%b==0)
        {
            r=max;
            break;
        }
        max++;
    }
    printf("%d",r);
    return 0;
}