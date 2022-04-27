#include<stdio.h>
int main()
{
    int n,i,c=1;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        //printf("%d ",ar[i]);
    }
    //printf("
");
    for(i=0;i<n;i++)
    {
        if(i+1<n)
        {
            if(ar[i]>ar[i+1])
            {
               // printf("%d %d if
",ar[i],ar[i+1]);
                c++;
            }
            else
            {
            //printf("%d %d else
",ar[i],ar[i+1]);
            break;
            }
        }
    }
    //printf("
%d %d
",c,n);
    if(c==n)
        printf("yes");
    else
        printf("no");
}