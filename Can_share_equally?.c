#include<stdio.h>
int main()
{
	int a,b,at,bt;
	scanf("%d",&a);
	scanf("%d",&b);
	at=a%2; //1,0 1c
	bt=b%2; //1,0 2c
	if(at==0 && (a>0 || bt%2==0))
	printf("YES");
	else
	printf("NO");
}