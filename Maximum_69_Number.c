#include<stdio.h>
int rev(int a)
{
	int temp,rev=0,k=a;
	while(k!=0)
	{
		temp=k%10;
		 rev=(rev*10)+temp;
		 k=k/10;
	}
	return rev;
}
int change(int n)
{
	int temp,i,re=0,k=n;
	int arr[100],count=0;
	while(k!=0)
	{
		temp=k%10;
		 arr[count]=temp;
		 k=k/10;
		 count++;
	}
	for(i=0;i<count;i++)
	{
		if(arr[i]==6)
		{
			arr[i]=9;
			break;
		}
	}
	int p=0;
	while(count--)
	{
		re=(re*10)+arr[p];
		p++;
	}
	return re;
}
int main()
{
	int n,r,c;
	scanf("%d",&n);
	r= rev(n);
	c= change(r);
	printf("%d
",c);
}