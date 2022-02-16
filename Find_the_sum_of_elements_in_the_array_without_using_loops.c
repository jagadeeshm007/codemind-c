#include<stdio.h>
int main()
{
	int a,i,s=0;
	scanf("%d",&a);
	int b[a];
    for(i=0;i<a;i++)
    {
	scanf("%d",&b[i]);    
    }
    for(i=0;i<a;i++)
    {
        s=s+b[i];   
    }
    printf("%d",s);
}