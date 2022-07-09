#include<stdio.h>
int main()
{
    int n,arr[100],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(n%2==0)
            {
                printf("%d ",arr[i]);
                break;
            }
            else
            {
                printf("%d ",arr[i]);
                break;
            }
        }
    }
    if(n%2==1)
    {
        printf("0");
    }
    return 0;
}