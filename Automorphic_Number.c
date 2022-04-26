#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,temp,a=0;
    scanf("%d",&n);
    int k=n;
    i=n*n;
    while(k!=0)
    {
        a++;
        k=k/10;
    }
    int c=pow(10,a);
    int l=i%c;
    if(n==l)
    printf("Automorphic Number");
    else
    printf("Not an Automorphic Number");
}