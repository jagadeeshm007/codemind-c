#include <stdio.h>
#include <string.h>
int main()
{
        char s[100];
        scanf("%[^
]s",s);
        //printf("%s
",s);
        int i=0,m=0;
            while(s[i]!=NULL)
            {
                //printf("%c",s[i]);
                if(s[i]>=48&&s[i]<=57)
                {
                   m=int(s[i])-48+m;
                }
                i++;
            }
        printf("%d",m);
    return 0;
}