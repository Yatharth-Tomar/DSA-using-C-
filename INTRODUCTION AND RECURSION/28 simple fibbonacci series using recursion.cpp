#include<stdio.h>
int f(int n)
{
	if(n<=1)
	{
		return n;
	}
	else
	{
		return f(n-2)+f(n-1);
	}
}
int main()
{
	int n;
	printf("Enter range: ");
	scanf("%d",&n);
	printf("%d",f(n));
}