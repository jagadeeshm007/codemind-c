#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int i,p,r=0;
    int n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            p= s[i]-48;
            r=r+p;  
        }
    }
   printf("%d",r);
}