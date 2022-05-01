#include<stdio.h>
int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
    int a[n],e=0,o=0;
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]); 
       
       //printf("%d ",a[i]);
    }
   // printf("
");
    for(i=0;i<n;i++)
    {
       if(n/2<=i)
       {
           e=e+a[i];
           //printf(" %d e",e);
       }
       else
       {
           o=o+a[i];
            //printf(" %d o",o);
       }
    }
    int as;
    //printf("
%d",e-o);
    if(e>o)
     as=e-o;
    else
     as=o-e;
    //printf("
%d %d",as,as/4);
    if(as%4==0)
    {
        printf("X");
    }
    else
    {
        printf("Y");
    }
}