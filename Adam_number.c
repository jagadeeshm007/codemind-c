#include<stdio.h>
int main()
{
    int n,i,k,t,r=0;
    scanf("%d",&n);
   // printf("%d",n);
   k=n;
    while(n!=0)
    {
        t=n%10;
        r=(r*10)+t;
        n=n/10;
    }
   // printf("%d",r);
   int sq,re=0,te=0;
   sq=r*r;
  // printf("%d
",sq);
    while(sq!=0)
    {
        te=sq%10;
        re=(re*10)+te;
        sq=sq/10;
    }
   // printf("%d
",re);
    if(k*k==re)
    printf("True");
    else
    printf("False");
    
}
