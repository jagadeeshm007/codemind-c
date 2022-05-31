#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,i,f;
    scanf("%d%d",&n,&m);
    //printf("%d %d ",n,m);
    int j=n,q=0,l=0,z,c,g;
    while(j)
    {
        q++;
        j=j/10;
    }
    l=pow(10,q-m);
    c=n/l;
    z=pow(10,m);
    g=n%z;
    printf("%d",abs(c-g));
}