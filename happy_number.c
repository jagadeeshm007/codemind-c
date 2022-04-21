#include<stdio.h>
int happy(int n)
{
    int tem,s=0;
    while(n!=0)
    {
       tem=n%10;
       s=s+(tem*tem);
       n=n/10;
    }
    if(s==1 || s==7)
    {
	//printf("%d ",s);
    return 1;}
    if(s==2||s==3||s==4||s==5||s==6||s==9||s==8)
    {//printf("%d ",s);
    return 0;}
    else
    return happy(s);
}
int main()
{
    int n,v;
    scanf("%d",&n);
    v=happy(n);
    //printf("%d",v);
   if(v==1)
   printf("True");
   else
   printf("False");
}
