#include<stdio.h>
#include<math.h>
int pm(int n)
{
    int i,j,c=0;
    for(i=0;i<n;i++)
    {
        c=0;
        if(n==1)
        c=1;
        for(j=2;j<n;j++)
        {
            if(n%j==0)
            {
                c++;
            }
        }
        if(c==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
int main()
{
	int n,i,j,tm,c=0,k=0,t;
    scanf("%d",&n);
    int a=n;
    if(pm(n)==1)
    {
        c=0;
        k=0;
        while(a!=0)
        {
            tm=a%10;
            if(pm(tm)==1)
            {
                c++;
            }
            a=a/10;
            k++;
        }
        if(c==k)
        {
            printf("Mega Prime");
        }
        else
        {
            printf("Not Mega Prime");   
        }
    }
    else
    {
        printf("Not Mega Prime");
    }
    
}