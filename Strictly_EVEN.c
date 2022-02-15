#include<stdio.h>
int main()
{
   int i,n,r=0;
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++)
   {
        scanf("%d",&a[i]);  
   }
   for(i=0;i<n;i++)
   {
       if(a[i]%2==0)
       {
           if(i%2==0)
           {
             r++;
           }
           else
           {
               r=0;
               break;
           }
       }
   }
   if(r!=0)
   {
       printf("True");
   }
   else
   {
       printf("False");
   }
}