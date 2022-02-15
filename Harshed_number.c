#include<stdio.h>
int main()
{
    int a,i,k,p,c=0,s=0;
    scanf("%d",&a);
    k=a;
    p=a;
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
	}
	if(p%s==0)
	{
		printf("True");
	}
	else
	{
	    printf("False");
	}
}