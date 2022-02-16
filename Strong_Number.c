#include<stdio.h>
int main()
{
	int a,i,j,c=0;
	scanf("%d",&a);
	int k=a,p=a;
     do 
    {
         k=k/10;
        c++;
    }
    while (k != 0);
    int b[c],d[c],s=0;
    for(i=0;i<c;i++)
    {
        b[i]=a%10;
        a=a/10;
    }
    for(i=0;i<c;i++)
    {
    	d[i]=1;
	        for(j=1;j<=b[i];j++)
	        {
	            d[i]=d[i]*j;    
	        }
    }
    for(i=0;i<c;i++)
    {
        s=s+d[i];
    }
   if(p==s)
   {
   printf("The number %d is a strong number",p);
   }
   else
   {
   printf("The number %d is not a strong number",p);
   }
}