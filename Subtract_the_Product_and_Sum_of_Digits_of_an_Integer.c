#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,temp=0,r,s=0,m=1;
	scanf("%d",&n); //234
    for(i=1;n!=0;i++)
    {
        temp=n%10; //4
        s=s+temp; //4
        m=m*temp; //4
        n=n/10; //23
    }
    r=abs(m-s);
    printf("%d",r);
}