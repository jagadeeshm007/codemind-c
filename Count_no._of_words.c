#include <stdio.h>
#include <string.h>
int main()
{
        char s[100];
        scanf("%[^
]s",s);
        int i=0,d=1;
            while(s[i]!=NULL)
            {
                if(s[i]==' ')
                {
                    d++;
                }
                i++;
            }
        printf("%d
",d);
    return 0;
}