#include<stdio.h>
#include<math.h>
int main()
{
    int t,n;
    scanf("%d",&n);
    t=sqrt(n);
    if(t*t==n)
    {
        printf("True");
    }
    else
    {
         printf("False");
    }
}