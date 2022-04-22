#include<stdio.h>
int main()
{
   int l,r,k,i,j=0;
   scanf("%d%d%d",&l,&r,&k);
   for(i=l;i<=r;i++)
   {
       if(i%k==0)
       {
           j++;
       }
   }
   printf("%d",j);
}