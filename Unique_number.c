#include<stdio.h>

int main()
{
    int n,i=0,j,k,t,s,c,z=0;
    int a[100];
   scanf("%d",&n);
   //printf("%d",n);
   while(n!=0)
   {
       t=n%10;
       a[i]=t;
       //printf(/*"%dn
%dt
%da
"*/"%d
"/*,n,t*/,a[i]);
       n=n/10;
       i++;
       
    }
   // i=i;
   // printf("%d
",i);
    for(j=0;j<i;j++)
    {
        //c=0;
        for(k=0;k<i;k++)
        {
        //	printf("%dk
",k);
            if(k!=j)
                {
                    if(a[j]==a[k])
                    {
                        
                        //printf("%dj %dc %dk %daj %dak
 ",j,c,k,a[j],a[k]);
                        c++;
                       // printf("%dc
",c);
                    }
                }
        }
       // printf("
");
    }
    
    // printf("%d",z);
   if(c==0)
   printf("Unique Number");
   else
   printf("Not Unique Number");
}