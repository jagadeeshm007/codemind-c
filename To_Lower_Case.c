#include <stdio.h>
#include <string.h>
int main()
{
    char s[100],k;
    scanf("%[^
]s",s);
    int i=0;
    while(s[i]!=NULL)
    {
        if(s[i]>=65&&s[i]<=90)
            k=s[i]+32;
        else
        k=s[i];
        printf("%c",k);
        i++;
    }
    return 0;
}