#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,b[5],c[5],j=0;
    char t[5],h[5],m[5];
    scanf("%s",t);
   // printf("%s
",t);
    for(i=0;i<5;i++)
    {
        if(i!=2)
        {
           b[j]=int(t[i]);
           c[j]=b[j]-48;
          // printf("%d
",c[j]);
           j++;
        }
    }
    float hh=(c[0]*10)+c[1];
    float mm=(c[2]*10)+c[3];
   // printf("%f
%f",hh,mm);
    float ang;
    ang=abs((float((30*hh)-(5.5*mm))));
   // printf("%.1f",ang);
    float ab;
    ab=360-ang;
    if(ang<ab)
    printf("%.1f",ang);
    else
    printf("%.1f",ab);
}