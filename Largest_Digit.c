#include<stdio.h>

int main()
{
    int n,temp=0,max=0,d;
    scanf("%d",&n);
    temp=n;
   while(temp>0)
   {
        d=temp%10;
        if(max<d)
        {
            max=d;
        }
         temp=temp/10;
   }
   printf("%d",max);
}