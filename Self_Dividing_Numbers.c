#include<stdio.h>
int main()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
     int tem,s=0,c=0,j=0,p=0;
     for(i=n;i<=m;i++)
     {
     	c=0;
         p=i;
        while(p!=0)
        {
        	j++;
           tem=p%10;
           if(tem!=0)
           {
	           if(i%tem==0)
	               c++;
	    	}
           p=p/10;
        }
        if(j==c)
        {
            printf("%d ",i);
        }
        j=0;
     }
}
