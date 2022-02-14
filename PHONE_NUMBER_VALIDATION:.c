#include<stdio.h>
int main()
{
	int n,i,r=0;
	scanf("%d",&n);
    if(n>=100000000 && n<=9999999999)
    {
    	printf("Valid");
	}
	else
	{
		printf("Invalid");
	}
}