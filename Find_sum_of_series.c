#include<stdio.h>
int main()
{
	float s=0,k=0;
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=i;
	    s=s+(k/(k*k));
	}
	printf("%.2f",s);
	return 0;
}