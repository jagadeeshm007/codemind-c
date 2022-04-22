#include<stdio.h>
#include<math.h>
int main()
{
    int t,i,n;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        t=sqrt(ar[i]);
        if(t*t==ar[i])
        {
            printf("True
");
        }
        else
        {
             printf("False
");
        }
    }
}