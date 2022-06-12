#include <stdio.h>
#include <string.h>
int main()
{
        char s[100];
        scanf("%[^
]s",s);
        //printf("%s
",s);
        int i=0,m=0,n=0,c=0,d=0;
            while(s[i]!=NULL)
            {
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
                {
                   m++;
                }
                else 
                {
                    if(s[i]>=48 && s[i]<=57)
                    {
                       c++;
                    }
                    else if(s[i]==' ')
                    {
                        d++;
                    }
                    else
                    {
                       n++;
                    }
                }
                i++;
            }
        printf("Vowels: %d
Consonants: %d
Digits: %d
White spaces: %d
",m,n,c,d);
    return 0;
}