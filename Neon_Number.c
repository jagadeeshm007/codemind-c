#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,temp=0,r,sq,s=0,m=1;
	scanf("%d",&n);
	sq=n*n;
    for(i=1;sq!=0;i++)
    {
        temp=sq%10;
        s=s+temp; 
        sq=sq/10; 
    }
   if(n==s)
   printf("Neon Number");
   else
   printf("Not Neon Number");
}