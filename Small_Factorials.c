#include<stdio.h>
int main()
{
   int n,i,j,s=1;
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
       // printf("%d array",a[i]);
   }
   for(i=0;i<n;i++)
   {
            for(j=1;j<=a[i];j++)
           {
              s=s*j; 
              // printf("
%drender_s
",s);
           }
         printf("%d
",s);
         s=1;
   }
}