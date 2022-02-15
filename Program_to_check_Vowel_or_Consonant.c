#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	if(ch=='a' || ch=='A' || ch=='E' || ch=='e' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
	{
		printf("Vowel");
	}
	else
	{
		printf("Consonant");
	}
}