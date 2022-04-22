#include<stdio.h>
int main()
{
    int n,i,j,m;
    scanf("%d",&n);
    int ar[100];
    int k=n,t=0,s=1,ad=0,f=0,a=0;
    while(k!=0)
    {
        t=k%10;
        ar[a]=t;
        k=k/10;
        a++;
    }
   int z=a;
    for(j=1;j<=a;j++)
    {
        for(m=z;m>0;m--)
        {
            s=s*ar[f];
        }
        f++;
        z--;
        ad=ad+s;
        s=1;
    }
    if(ad==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}