#include<stdio.h>
#include<math.h>
int main()
{
	int a,i,k;
	scanf("%d",&a);
    k=sqrt(a);
    i=k*k;
    if(i==a)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}