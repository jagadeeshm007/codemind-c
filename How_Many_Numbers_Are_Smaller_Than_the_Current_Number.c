#include<stdio.h>
int main()
{
    int n,i,j,p,t=0,c=0;
    int a[n],b[n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);   
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]>a[j])
            {
                c++;
            }
        }
        b[i]=c;
        printf("%d ",c);
    }
    

}