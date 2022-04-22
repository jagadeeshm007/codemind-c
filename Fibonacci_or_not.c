#include<stdio.h>
int main()
{
    int n,i,s,k,tn=1,tm=0;
    scanf("%d",&n);
    for(i=0;i<20;i++)
    {
       s=tn+tm;
       tn=tm;
       tm=s;
       if(s==n)
       {
           printf("True");
           break;
       }
       //printf("%d ",s);
    }
    if(s!=n)
    printf("False");
}
