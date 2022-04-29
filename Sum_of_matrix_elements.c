#include<stdio.h>
int main()
{
	int n,m,i,j,s;
	scanf("%d%d",&n,&m);
	int arr[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int max=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            max=max+arr[i][j];
        }
    }
    printf("%d",max);
}