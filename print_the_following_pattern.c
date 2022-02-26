  #include<stdio.h>
int main()
{
  int n,i=0,j;
  char k,c[26];
  for(k=65;k<=90;k++)
  {
  	c[i]= k;
  	i++;
  }
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  	for(j=0;j<n;j++)
  	{
  		printf("%c ",c[i]);
	  }
	  printf("
");
  }
}