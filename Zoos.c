#include <stdio.h>
int main()
{
    char s[100] ;
    scanf("%[^
]s",s);
    int z=0,o=0,i=0;
    while(s[i]!=NULL)
    {
        if(s[i]=='z')
        {
            z++;
        }
        if(s[i]=='o')
        {
            o++;
        }
        i++;
    }
    if(2*z==o)
    {
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}