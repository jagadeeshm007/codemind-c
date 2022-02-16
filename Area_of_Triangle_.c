#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,s,s1;
    float area;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    s=(a+b+c)/2;
    s1=s*(s-a)*(s-b)*(s-c);
    area=sqrt(s1);
    printf("%.2f",area);
}