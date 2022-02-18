#include<stdio.h>
int main()
{
	int n,j,p,k,i,c=0,r=0,rev;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]); 
	}
	for(i=0;i<n;i++)
	{
		    k=arr[i]; 
		    p=arr[i];
		    do
		    {
		        k=k/10;
		        ++c; 
		    }
		    while (k != 0);
		    for(j=1;j<=c;j++)
		    {
		        rev=arr[i]%10;  
		        r=r*10+rev; 
		        arr[i]=arr[i]/10; 
		    }
		   if(p==r)
		   printf("True
");
		   else
		   printf("False
");
		   c=0;
		   r=0;
		   rev=0;
	}
}