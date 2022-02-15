#include<stdio.h>
int main()
{
	int a,i,s=0,p=1,c=0;
	scanf("%d",&a);
	int k=a;
     do 
    {
         k=k/10;
        ++c;
    }
    while (k != 0);
    int b[c];
    for(i=0;i<c;i++)
    {
        b[i]=a%10;
        a=a/10;
    }
    for(i=0;i<c;i++)
    {
        s=s+b[i];
        p=p*b[i];
    }
    if(s==p)
    {
        printf("Spy Number");
    }
    else
    {
         printf("Not Spy Number");
    }
}