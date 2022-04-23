#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k=n-1;
    for(i=0;i<n;i++)
    {
        if(i<n/2)
        {
        printf("%d ",arr[k]);
        k--;
        }
    }
    for(i=0;i<n/2;i++)
    {
        printf("%d ",arr[i]);
    }
}