#include<stdio.h>
int main()
{
	int a,k,i,c=0,r=0,rev;
	scanf("%d",&a); 
    k=a; 
    do
    {
        k=k/10;
        ++c; 
    }
    while (k != 0);

    for(i=1;i<=c;i++)
    {
        rev=a%10;  
        r=r*10+rev; 
        a=a/10; 
    }
    printf("%d",r);
}