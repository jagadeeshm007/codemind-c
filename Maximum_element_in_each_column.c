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
    int max;
    for(i=0;i<m;i++)
    {
        max=0;
        for(j=0;j<n;j++)
        {
            if(arr[j][i]>max)
            {
                max=arr[j][i];
            }
        }
        printf("%d
",max);
    }
}