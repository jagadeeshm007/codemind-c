#include<stdio.h>

int main()
{
    int n,i=0,j,k,t,s,c,z=0;
    int a[100];
   scanf("%d",&n);
   while(n!=0)
   {
       t=n%10;
       a[i]=t;
       n=n/10;
       i++;
    }
    for(j=0;j<i;j++)
    {
        for(k=0;k<i;k++)
        {
            if(k!=j)
                {
                    if(a[j]==a[k])
                     c++;
                }
        }
    }
   if(c==0)
   printf("Unique Number");
   else
   printf("Not Unique Number");
}