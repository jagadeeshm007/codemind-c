#include<stdio.h>
int pal(int n)
{
   int b,r=0,t;
   int k=n,p=n;
   while(k!=0)
   {
      b=k%10;
      r=(r*10)+b;
      k=k/10;
   }
   if(p==r)
   return p;
   else
   return pal(r+p);
}
int rev(int n)
{
   int a,b=0,c;
   int d=n;
   while(d!=0)
   {
   		a=d%10;
   		b=(b*10)+a;
   		d=d/10;
   }
   return b;
}
int main()
{
    int a;
    scanf("%d",&a);
    a=a+rev(a);
    //printf("%d",a);
    printf("%d",pal(a));
}