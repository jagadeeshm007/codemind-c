#include<stdio.h>
int main()
{
   int n,i,j,c=0,s;
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
               if(a[i]==a[j])
               {
                   //printf("%di,%dj,
",a[i],a[j]);
                   c++;
                   break;
               }
       }
       //printf("%d
",c);
       if(c>0)
       {
            printf("%d",a[i]);
           break;
       }
   }
}