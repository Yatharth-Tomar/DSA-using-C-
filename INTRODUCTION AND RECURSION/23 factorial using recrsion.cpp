#include<stdio.h>
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return fact(n-1)*n;
	}
}
int main()
{
	int n;
	printf("Enter value of n: ");
	scanf("%d",&n);
	printf("%d",fact(n));
	
}