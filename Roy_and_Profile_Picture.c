#include<stdio.h>
int main()
{
   int n,l,i,j;
   scanf("%d",&l);
   scanf("%d",&n);
   int w[n],h[n];
   for(i=0;i<n;i++)
   {
           scanf("%d",&w[i]);
           scanf("%d",&h[i]);
   }
   for(i=0;i<n;i++)
   {
           if(w[i]<l || h[i]<l)
           {
               printf("UPLOAD ANOTHER
");
           }
           else if(w[i]==l&&h[i]==l || w[i]==h[i])
           {
               printf("ACCEPTED
");
           }
           else
           {
               printf("CROP IT
");
           }
   }
}