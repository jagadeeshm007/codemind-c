#include<stdio.h>
int main()
{
	int a,i,s=0;
	scanf("%d",&a);
	if(a>= -1000 && a<0)
	{
	    printf("Negative Number");
	}
	else if(a<=1000 && a>0)
	{
	     printf("Positive Number");
	}
}