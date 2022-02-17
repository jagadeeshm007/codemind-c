#include <stdio.h>
int main()
{
   int l,b,w,c,a,a1,t,cost;
   scanf("%d%d%d%d",&l,&b,&w,&c); 
   a=(l+(w*2))*(b+(w*2));
   a1=l*b;
   t=a-a1;
   cost=t*c;
 //  if(w*2 >= l || w*2 >= b)
 //  printf("Impossible");
 //  else
   printf("%d",cost);
}