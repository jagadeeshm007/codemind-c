#include<stdio.h>
int main()
{
    int a,i,k,c=0,ec=0,oc=0;
    scanf("%d",&a);
    k=a;
    do 
    {
        k=k/10;
        ++c;
    }
    while (k != 0);
    
    int b[c];
    for(i=0;i<c;i++)
    {
        b[i]=a%10;
        a=a/10;
    }
    for(i=0;i<c;i++)
    {
        if(b[i]%2==0)
        {
            ec++;   
        }
        else
        {
            oc++;
        }
    }
    if(ec>0 && oc==0)
    {
        printf("Even");
    }
    else if(oc>0 && ec==0)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
    return 0;
}