#include<stdio.h>
int fact(int n,int r)
{
	if(n==r||r==0)
	{
		return 1;
	}
	else
	{
		return fact(n-1,r-1)+fact(n-1,r);
	}
}
int main()
{
	int n,r;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("Enter r: ");
	scanf("%d",&r);
	printf("%d",fact(n,r));
}