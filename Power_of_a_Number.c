#include<stdio.h>
#include<math.h>
int main()
{
   int n,p,k,s,a,i;
   scanf("%d%d%d",&n,&p,&k);
   s=pow(n,p);
   a=s%k;
   printf("%d",a);
}