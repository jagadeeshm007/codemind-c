#include<stdio.h>  
int main()
{  
    int year;  
   // printf("Enter a year: ");  
    scanf("%d",&year);  
    if(year%400 == 0 || (year%100 != 0 && year%4 == 0))  
    {  
        printf("True");  
    }
    else 
    {  
        printf("False");  
    }  
}  