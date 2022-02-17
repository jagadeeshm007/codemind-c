#include <stdio.h>
int main()
{
  int a,k,i,c=0,r,rev=0;
	scanf("%d",&a); 
	int p=a;
    k=a;
    do 
    {
        k=k/10;
        ++c; 
    }
    while (k != 0);
   // printf("%d cc
",c);
    for(i=0;i<c;i++)  
    {
        r=a%10; 
    //    printf("%d rr
",r);
        rev =rev*10+r;
     //   printf("%d rev
",rev);
        a=a/10;
     //   printf("%d aa
",a);
    }
   // printf("%d",rev);
   if(p==rev)
   printf("True");
   else
   printf("False");
   
}