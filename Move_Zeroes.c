#include<stdio.h>
int main()
{
    int n,p,j;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
        	//printf("%d intialj,%d
",a[j],a[j+1]);
            if(a[j]==0)
            {
                p=a[j];
                a[j]=a[j+1];
                a[j+1]=p;
                //	printf("%d after swapj, %d a[j+1]
",a[j],a[j+1]);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}