#include<stdio.h>
int main()
{
    int n,i,j,s=0;
    scanf("%d",&n);
    //printf("%dn
",n);
    for(i=1;i<n;i++)
    {
          if(n%i==0)
          {
              s=s+i;
             // printf("%ds%di
",s,i);
          }
    }
    if(s>n)
    printf("True");
    else
    printf("False");
}